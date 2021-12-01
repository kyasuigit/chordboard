/**
 * @file trumpet_widget.cpp
 * @brief Implementation of the trumpet widget class
 *
 * Implements the trumpet class that is used by the UI. Using various
 * features, the user can input the desired note of a trumpet and receive feedback on
 * what other chords may synchronize with it.
 *
 * @author Kohei Yasui (kyasui) && John Dick (jdick32)
 * @bug Some output only plays one note, missing some F# notes.
 * */
#include "trumpet_widget.h"
#include "ui_trumpet_widget.h"

trumpet_widget::trumpet_widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::trumpet_widget)
{
    isNew = true;
    init = true;
    playTick();
    init = false;
    metronomeBpm = 60; // initializes all variables to be used
    scale = "CMajor";
    inputScale = "";

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &trumpet_widget::playTick); // connects timer to the playTick function

    ui->setupUi(this); // setup UI
    valveOne = 0;
    valveTwo = 0;
    valveThree = 0;
    partial = 1;
    arpeggio = false;
    recordOn = false;
    currentComb = "";
    file.setFileName(":/trumpet/assets/trumpet_graphic.jpg"); // file for the trumpet graphic.

}

trumpet_widget::~trumpet_widget()
{
    delete ui;
    isNew = false;
    playTick(); // deconstructor for all pointers
    delete timer;
}

QWidget *trumpet_widget::returnWidget()
{
    return ui->widgetBox; // returns the widget used in the mainwindow
}


void trumpet_widget::on_valve1_stateChanged(int arg1)
{
    if (arg1 == 2)
        valveOne = 1; // updates valve1's value
    else
        valveTwo = 0;
}


void trumpet_widget::on_valve2_stateChanged(int arg1)
{
    if (arg1 == 2)
        valveTwo = 1;// updates valve2's value
    else
        valveTwo = 0;
}


void trumpet_widget::on_valve3_stateChanged(int arg1)
{
    if (arg1 == 2)
        valveThree = 1;// updates valve3's value
    else
        valveThree = 0;
}


void trumpet_widget::on_playButton_clicked()
{
    QFile file(":/trumpet/assets/trumpet_notes"); // open the notes file for Trumpet
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    QString note_name = "";

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list = line.split(",");

        QString note = list.at(0);

        if (list.at(1).compare(QString::number(partial)) == 0){ // if the partial and valves match
            if ((list.at(2).compare(QString::number(valveOne)) == 0) && (list.at(3).compare(QString::number(valveTwo)) == 0) && (list.at(4).compare(QString::number(valveThree)) == 0)) {
                note_name = note;
                if (recordOn) {
                    currentComb = currentComb + note_name + " "; // add it to the current combination if recordOn is set to true
                }
                break;
            }
        }
    }
    bool error = false;
    if (note_name == "") { // if this process fails or doesnt exist, an error message pops up.
        QMessageBox message(QMessageBox::Critical, tr("Error!"), tr("This combination is not valid."), QMessageBox::Ok, 0, Qt::Window);
        message.exec();
        error = true;
    }

    if (QFile::exists(":/trumpet/assets/trumpet_" + note_name + ".wav")) {
        QString file(":/trumpet/assets/trumpet_" + note_name + ".wav");
        QSoundEffect player;
        player.setSource(QUrl::fromLocalFile(file));
        player.setVolume(1.0f);
        player.play();
        QEventLoop loop;
        loop.exec(); // plays the corresponding note.
    }
    else if (!error) {
        QMessageBox message(QMessageBox::Critical, tr("Error!"), tr("This combination is not valid."), QMessageBox::Ok, 0, Qt::Window);
        message.exec();
    }

}


void trumpet_widget::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == 2)
        arpeggio = true; // sets arpeggio to true
    else
        arpeggio = false;
}


void trumpet_widget::on_recordButton_toggled(bool checked)
{
    if (checked) {
        currentComb  = "";
        recordOn = true;
        ui->recordButton->setText("Recording..."); // sets recording to on if the user hits it.
    }
    else {
        recordOn = false;
        ui->recordButton->setText("Record");

    }
}


void trumpet_widget::on_partialCombo_currentIndexChanged(int index)
{
    partial = index + 1; // updates the value of the partial
}


void trumpet_widget::on_stopButton_clicked()
{
    if (ui->recordButton->isChecked()) {
        this->on_recordButton_toggled(false);
        ui->recordButton->toggle();
    }
    if (currentComb != "") {
        ui->inputList->addItem(currentComb); // adds the item combination to the input list and clears the output list
        ui->outputList->clear();
        this->displayOutput(currentComb); // calls displayOutput to display the output received from the backend
        currentComb  = "";

        inputScale = scale;
    }
}


void trumpet_widget::on_clearButton_clicked()
{
    ui->inputList->clear();
    ui->outputList->clear(); // clears all lists
}

void trumpet_widget::displayOutput(QString notes)
{
    QStringList note_list = notes.split(" "); // splits the string at spaces
    note_list.removeLast();

    Chord currentChord(scale.toStdString());

    for (int i = 0; i < note_list.size(); i++) {
        std::string full_note = note_list.at(i).toStdString();
        std::string note_name;
        int octave;
        if (note_list.at(i).size() == 3) {
            octave = full_note.at(2) - '0';
            note_name = full_note.substr(0,2);
        }
        else {
            octave = full_note.at(1) - '0';
            note_name = full_note.substr(0,1);
        }

        Note noteObj(note_name, octave); // creates the Note and Chord Object from the string given
        currentChord.insertNote(noteObj);
    }

    findChord algorithm = findChord(); // calls findChord
    std::vector <Chord> output_list;
    if (inputScale.contains("Major")) {
        output_list = algorithm.blowMajor(currentChord); // calls the backend blowMajor or blowMinor based on the scale.
    }
    else
        output_list = algorithm.blowMinor(currentChord);

    for (Chord i: output_list) {
        std::vector <Note> note_list = i.returnNoteVector();
        QString note_item = "";
        int count = 0;
        QString currentScale;
        for (Note j: note_list) {
            count++;
            QString file = QString::fromStdString(j.returnNoteName()) + QString::number(j.returnOctave());
            if (QFile::exists(":/trumpet/assets/trumpet_" + file + ".wav")) {
                note_item.append(QString::fromStdString(j.returnNoteName()) + QString::number(j.returnOctave()) + " ");
            }

            if (count == 1) {
                if (inputScale.contains("Major")) {
                    currentScale = QString::fromStdString(i.returnKey(j, true)); // creates the string object from the Chord objects received
                }
                else
                    currentScale = QString::fromStdString(i.returnKey(j, false));
                currentScale.replace(" ", "");
            }
        }
        note_item.append(currentScale); // appends the scale
        ui->outputList->addItem(note_item); // adds it to the output
    }


}

void trumpet_widget::on_removeButton_clicked()
{
    qDeleteAll(ui->inputList->selectedItems()); // deletes the highlighted items
    ui->outputList->clear(); // clears output list
}


void trumpet_widget::on_inputList_itemClicked(QListWidgetItem *item)
{
    ui->outputList->clear();
    QStringList notes = item->text().split(" "); // splits the string on the input list and plays the respective wav files
    for (int i = 0; i < notes.size(); i++) {
        if (QFile::exists(":/trumpet/assets/trumpet_" + notes.at(i) + ".wav")) {
            QString file(":/trumpet/assets/trumpet_" + notes.at(i) + ".wav");
            QSound::play(file);
            if (arpeggio)
                this->delay(1000); // if arpeggio, delay the synchronization of the files
        }
    }
    displayOutput(item->text());
}

void trumpet_widget::delay(int msec) // delay function to add delay to the widget
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100); // based on how many msecs are given in the parameter, the ui delays by that amount.
}


void trumpet_widget::on_metronome_toggled(bool checked)
{
    if (checked) {
        ui->metronome->setText("On");
        float bpm = 60.0 / metronomeBpm * 1000; // calculates bpm

        deletion = false;
        timer->start(bpm); //starts the timer
    }
    else {
        ui->metronome->setText("Off");
        timer->stop();
        deletion = true;
        playTick();
    } // plays tick
}


void trumpet_widget::on_sliderBpm_sliderMoved(int position)
{
    metronomeBpm = position; // updates the metronomeBpm when the slider moves
}

void trumpet_widget::playTick()
{
    static QSound *ticker; // uses a static method to avoid overlap
    if (!isNew) {
        delete ticker;
    }

    if (init)
         ticker = new QSound("qrc:/piano/assets/metronomeTick.wav");
    else {
        if (!deletion) {
            ticker->play();// plays the metronome sound
        }
        else {
            ticker->stop();
        }
    }
}

void trumpet_widget::on_inputHelpButton_clicked()
{
    QPixmap pm(":/trumpet/assets/trumpet_help.jpg");
    QMessageBox helpBox; // sets up the messagebox for the ui in case the user wants help.

    helpBox.setWindowTitle("Fingering Help");
    helpBox.setStandardButtons(QMessageBox::Ok);
    helpBox.setIconPixmap(pm);

    helpBox.exec();
}


void trumpet_widget::on_scaleCombo_currentIndexChanged(const QString &arg1)
{
    scale = arg1;
    scale.replace(" ", ""); // updates the scale combo
}


void trumpet_widget::on_outputList_itemClicked(QListWidgetItem *item)
{
    QStringList notes = item->text().split(" "); // splits the string, and plays the respective sounds of the given output list item
    for (int i = 0; i < notes.size(); i++) {
        if (notes.size() < 5) {
            if (QFile::exists(":/trumpet/assets/trumpet_" + notes.at(i) + ".wav")) {
                QString file(":/trumpet/assets/trumpet_" + notes.at(i) + ".wav");
                QSound::play(file);
                if (arpeggio)
                    this->delay(1000);
            }
        }
    }
}

