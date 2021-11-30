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
    metronomeBpm = 60;
    scale = "CMajor";
    inputScale = "";

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &trumpet_widget::playTick);

    ui->setupUi(this);
    valveOne = 0;
    valveTwo = 0;
    valveThree = 0;
    partial = 1;
    arpeggio = false;
    recordOn = false;
    currentComb = "";
    file.setFileName(":/trumpet/assets/trumpet_graphic.jpg");

}

trumpet_widget::~trumpet_widget()
{
    delete ui;
    isNew = false;
    playTick();
    delete timer;
}

QWidget *trumpet_widget::returnWidget()
{
    return ui->widgetBox;
}


void trumpet_widget::on_valve1_stateChanged(int arg1)
{
    if (arg1 == 2)
        valveOne = 1;
    else
        valveTwo = 0;
}


void trumpet_widget::on_valve2_stateChanged(int arg1)
{
    if (arg1 == 2)
        valveTwo = 1;
    else
        valveTwo = 0;
}


void trumpet_widget::on_valve3_stateChanged(int arg1)
{
    if (arg1 == 2)
        valveThree = 1;
    else
        valveThree = 0;
}


void trumpet_widget::on_playButton_clicked()
{
    QFile file(":/trumpet/assets/trumpet_notes");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    QString note_name = "";

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list = line.split(",");

        QString note = list.at(0);

        if (list.at(1).compare(QString::number(partial)) == 0){
            if ((list.at(2).compare(QString::number(valveOne)) == 0) && (list.at(3).compare(QString::number(valveTwo)) == 0) && (list.at(4).compare(QString::number(valveThree)) == 0)) {
                note_name = note;
                if (recordOn) {
                    currentComb = currentComb + note_name + " ";
                }
                break;
            }
        }
    }
    bool error = false;
    if (note_name == "") {
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
        loop.exec();
    }
    else if (!error) {
        QMessageBox message(QMessageBox::Critical, tr("Error!"), tr("This combination is not valid."), QMessageBox::Ok, 0, Qt::Window);
        message.exec();
    }

}


void trumpet_widget::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == 2)
        arpeggio = true;
    else
        arpeggio = false;
}


void trumpet_widget::on_recordButton_toggled(bool checked)
{
    if (checked) {
        currentComb  = "";
        recordOn = true;
        ui->recordButton->setText("Recording...");
    }
    else {
        recordOn = false;
        ui->recordButton->setText("Record");

    }
}


void trumpet_widget::on_partialCombo_currentIndexChanged(int index)
{
    partial = index + 1;
}


void trumpet_widget::on_stopButton_clicked()
{
    if (ui->recordButton->isChecked()) {
        this->on_recordButton_toggled(false);
        ui->recordButton->toggle();
    }
    ui->inputList->addItem(currentComb);
    ui->outputList->clear();
    this->displayOutput(currentComb);
    currentComb  = "";

    inputScale = scale;
}


void trumpet_widget::on_clearButton_clicked()
{
    ui->inputList->clear();
    ui->outputList->clear();
}

void trumpet_widget::displayOutput(QString notes)
{
    QStringList note_list = notes.split(" ");
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

        Note noteObj(note_name, octave);
        currentChord.insertNote(noteObj);
    }

    findChord algorithm = findChord();
    std::vector <Chord> output_list;
    if (inputScale.contains("Major")) {
        output_list = algorithm.blowMajor(currentChord);
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
                    currentScale = QString::fromStdString(i.returnKey(j, true));
                }
                else
                    currentScale = QString::fromStdString(i.returnKey(j, false));
                currentScale.replace(" ", "");
            }
        }
        note_item.append(currentScale);
        ui->outputList->addItem(note_item);
    }


}

void trumpet_widget::on_removeButton_clicked()
{
    qDeleteAll(ui->inputList->selectedItems());
    ui->outputList->clear();
}


void trumpet_widget::on_inputList_itemClicked(QListWidgetItem *item)
{
    ui->outputList->clear();
    QStringList notes = item->text().split(" ");
    for (int i = 0; i < notes.size(); i++) {
        if (QFile::exists(":/trumpet/assets/trumpet_" + notes.at(i) + ".wav")) {
            QString file(":/trumpet/assets/trumpet_" + notes.at(i) + ".wav");
            QSound::play(file);
            if (arpeggio)
                this->delay(1000);
        }
    }
    displayOutput(item->text());
}

void trumpet_widget::delay(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void trumpet_widget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space) {
        //on_recordButton_toggled(true);
    }
}


void trumpet_widget::on_metronome_toggled(bool checked)
{
    if (checked) {
        ui->metronome->setText("On");
        float bpm = 60.0 / metronomeBpm * 1000;

        deletion = false;
        timer->start(bpm);
    }
    else {
        ui->metronome->setText("Off");
        timer->stop();
        deletion = true;
        playTick();
    }
}


void trumpet_widget::on_sliderBpm_sliderMoved(int position)
{
    metronomeBpm = position;
}

void trumpet_widget::playTick()
{
    static QSound *ticker;
    if (!isNew) {
        delete ticker;
    }

    if (init)
         ticker = new QSound("qrc:/piano/assets/metronomeTick.wav");
    else {
        if (!deletion) {
            ticker->play();
        }
        else {
            ticker->stop();
        }
    }
}

void trumpet_widget::on_inputHelpButton_clicked()
{
    QPixmap pm(":/trumpet/assets/trumpet_help.jpg");
    QMessageBox helpBox;

    helpBox.setWindowTitle("Fingering Help");
    helpBox.setStandardButtons(QMessageBox::Ok);
    helpBox.setIconPixmap(pm);

    helpBox.exec();
}


void trumpet_widget::on_scaleCombo_currentIndexChanged(const QString &arg1)
{
    scale = arg1;
    scale.replace(" ", "");
}


void trumpet_widget::on_outputList_itemClicked(QListWidgetItem *item)
{
    QStringList notes = item->text().split(" ");
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

