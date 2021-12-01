/**
 * @file pianowidget.cpp
 * @brief Implementation of the piano widget class.
 *
 *
 * @author Kohei Yasui (kyasui)
 * @bug Output occasionally bugs when played, only playing one note.
 * */
#include "pianowidget.h"
#include "ui_pianowidget.h"

pianowidget::pianowidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pianowidget)
{
    ui->setupUi(this);
    this->octave = ui->octaveCombo->currentText(); // sets the octave
    currentChord = Chord("CMajor");
    record = false, arpeggio = false, staccato = false, chordPlay = false; // initializes all variables to be used
    alreadyRecorded = false;
    scale = QString("CMajor");
    dynamic = "Normal";
    metronomeBpm = 60;
    isNew = true;
    init = true;
    playTick();
    init = false;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &pianowidget::playTick); // connects the timer timeout to playTick to play a metronome tick.


    connect(ui->C, &QPushButton::clicked, this, &pianowidget::playNote); // connects all of the piano buttons to the playNote function.
    connect(ui->CS, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->D, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->DS, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->E, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->F, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->FS, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->G, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->GS, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->A, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->AS, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->B, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->C2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->CS2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->D2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->DS2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->E2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->F2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->FS2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->G2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->GS2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->A2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->AS2, &QPushButton::clicked, this, &pianowidget::playNote);
    connect(ui->B2, &QPushButton::clicked, this, &pianowidget::playNote);

}

pianowidget::~pianowidget()
{
    delete ui; // deconstructor to delete all pointers.
    isNew = false;
    playTick();
    playNote();
}

QGroupBox* pianowidget::returnWidget()
{
    return ui->pianoInterfaceBox; // returns the box that houses the piano widget.
}

void pianowidget::on_metronomeButton_clicked(bool checked)
{
    if (checked) {
        ui->metronomeButton->setText("On");
        float bpm = 60.0 / metronomeBpm * 1000; // calculates the interval between metronome ticks.

        deletion = false;
        timer->start(bpm); // starts the timer based on the bpm
    }
    else {
        ui->metronomeButton->setText("Off");  
        timer->stop();
        deletion = true; // stops the metronome.
        playTick();
    }
}

void pianowidget::playNote()
{
    QPushButton* note = qobject_cast<QPushButton*>(sender()); // uses inheritance to distinguish which PushButton's signal called this
    if (isNew) {
        if(!note) return;

        QString notename = note->objectName(); // gets the note name through the object


        if (notename.contains(QString("S"))) {
            notename.replace(QString("S"), QString("#")); // replaces S by #
        }

        if (notename.contains(QString("2"))) {
            notename.remove(QString("2"));
            if (this->octave != "0")
                notename.append(this->octave.at(2));
            else
                notename.append(this->octave.at(0)); // removes 2's from the object name
        }

        else {
            if (this->octave != "0")
                notename.append(this->octave.at(0));
        }

        if (QFile::exists(":/piano/assets/" + notename + ".wav")) { // if the file exists
            QSoundEffect play;
            QString file(":/piano/assets/" + notename + ".wav");
            play.setSource(QUrl::fromLocalFile(file));
            if (dynamic == QString("Forte"))
                play.setVolume(1.0f);
            else if (dynamic == QString("Normal")) // set volume for current dynamic
                play.setVolume(0.5f);
            else if (dynamic == QString("Piano")) {
                play.setVolume(0.25f);
            }

            play.play();// play the sound

            if (record) {
                std::string fullStr = notename.toStdString(); // if record is on, record the note that is palyed.
                std::string noteStr;

                int oct;
                if (fullStr.size() == 3) {
                    oct = fullStr.at(2) - '0';
                    noteStr = fullStr.substr(0,2);
                }
                else {
                    oct = fullStr.at(1) - '0';
                    noteStr = fullStr.substr(0,1);
                }

                Note newNote = Note(noteStr, oct); // creates a Note object
                currentChord.insertNote(newNote); // adds it to the currentChord.
            }
            QEventLoop loop; // executes an event loop.
            loop.exec();
        }
    }
    else
        delete note; // deletes note once its done.
}

void pianowidget::on_octaveCombo_currentIndexChanged(const QString &arg1)
{
    this->octave = arg1; // sets the octave if it is changed.
}


void pianowidget::on_recordButton_toggled(bool checked)
{
    if (checked) {
        record = true;
        ui->recordButton->setText("Recording..."); // creates a Chord object to input.
        if (!currentChord.returnNoteVector().empty())
            currentChord = Chord(scale.toStdString());
    }
    else {
        record = false;
        ui->recordButton->setText("Record");
    }
}

void pianowidget::on_stopButton_clicked()
{
    if (ui->recordButton->isChecked()) { // toggles off the record button
        this->on_recordButton_toggled(false);
        ui->recordButton->toggle();
    }
    std::string input = "";
    std::vector<Note> notes = currentChord.returnNoteVector();
    if (!notes.empty()) {
        for (Note i:notes) {
            input.append(i.returnNoteName() + std::to_string(i.returnOctave()) + " "); // appends to the string all of the notes
        }
        input.pop_back();

        input.append(" " + scale.toStdString());

        ui->inputList->addItem(QString::fromStdString(input)); // converts to a QString and adds it to input
        inputScale = scale;
        this->output(QString::fromStdString(input)); // adds the output by calling the output function

        currentChord = Chord(inputScale.toStdString()); // sets the current chord.
    }
}


void pianowidget::on_inputList_itemDoubleClicked(QListWidgetItem *item)
{
    QStringList notes = item->text().split(" "); // splits the input item's text by spaces
    Chord selection = Chord(scale.toStdString());
    for (int i = 0; i < notes.size(); i++) {
        if (notes.at(i).size() <= 3){
            playBack(notes.at(i)); // plays the note back.
            std::string notestring = notes.at(i).toStdString();
            int oct;
            std::string note_part;
            if (notestring.size() == 3) {
                oct = notestring.at(2) - '0'; // converts the string to a note object
                note_part = notestring.substr(0,2);
            }
            else {
                oct = notestring.at(1) - '0';
                note_part = notestring.substr(0,1);
            }
            Note note = Note(note_part, oct);
            selection.insertNote(note); // adds it to the Chord.
        }
        else {
            inputScale = notes.at(i); //sets the scale from the text
        }
    }
    createList(selection); // creates the list.
}

void pianowidget::playBack(QString note)
{
    if (QFile::exists(":/piano/assets/" + note + ".wav")) { // if the file exists.

        QString file(":/piano/assets/" + note + ".wav"); //generates a string to the asset.

        if (staccato) { // if staccato
            QSound player(file);
            player.play(); // plays the sound file
            this->delay(350); // delays the system by 350 ms
            player.stop();// stops the player.
            this->delay(120); // delays by another 120 ms
            player.deleteLater(); // set to delete the player later.
        }
        else if (arpeggio && !staccato) {
            QSound::play(file); // if arpeggio, play the sound file
            this->delay(180); // delay by 180
        }
        else {
            QSound::play(file); // if none are selected, just play the file.
        }
    }
}

void pianowidget::on_clearButton_clicked()
{
    ui->inputList->clear(); // clears both input and output list
    ui->outputList->clear();
}

void pianowidget::delay(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec); // sets a QTime dieTime for how long after current time.
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100); // delays all processes until dieTime is hit.
}

void pianowidget::output(QString input)
{
    Chord inputChord(inputScale.toStdString());
    QStringList notes = input.split(" ");
    for (int i = 0; i < notes.size(); i++) { // same splitting of the string as done previously.
        if (notes.at(i).size() <= 3 && notes.at(i) != "") {
            QString note_qstring = notes.at(i);
            std::string note_string = note_qstring.toStdString();
            int oct;
            std::string note_part;

            if (note_string.size() == 3) {
                oct = note_string.at(2) - '0';
                note_part = note_string.substr(0,2);
            }
            else {
                oct = note_string.at(1) - '0';
                note_part = note_string.substr(0,1);
            }

            inputChord.insertNote(Note(note_part, oct));
        }
        else {
            outputScale = notes.at(i);
        }
    }
    createList(inputChord); // calls createList

}

void pianowidget::createList(Chord input)
{
    ui->outputList->clear();
    findChord backend = findChord(); // calls findChord
    std::vector <Chord> output;
    if (scale.contains("Major")) // if it is major, call the findMajor, else call findMinor
        output = backend.findMajor(input);
    else
        output = backend.findMinor(input);

    for (Chord i:output) {
        QString list("");
        for (Note j:i.returnNoteVector()) {
            list.append(QString::fromStdString(j.returnNoteName() + std::to_string(j.returnOctave()) + " "));
        }
        int pos = list.lastIndexOf((QChar(' ')));
        list.remove(pos); // for each note in each chord, add it to a string.


        QString list_item_scale;
        if (scale.contains("Major"))
            list_item_scale = QString::fromStdString(i.returnKey(i.returnNoteVector().at(0), true)); // gets the scale based of the chord.
        else
            list_item_scale = QString::fromStdString(i.returnKey(i.returnNoteVector().at(0), false));

        list_item_scale.remove(" ");
        list.append(list_item_scale);

        ui->outputList->addItem(list);// adds it to the output list.
    }
}


void pianowidget::on_arpeggioCheck_stateChanged(int arg1)
{
    if (arg1 == 2) {
        arpeggio = true;
        ui->checkStaccato->setEnabled(true); // enables the checkbox for staccato and sets arpeggoi to true.
    }
    else {
        arpeggio = false;
        ui->checkStaccato->setEnabled(false);
        if (ui->checkStaccato->checkState())
            ui->checkStaccato->toggle();
    }
}


void pianowidget::on_dynamicCombo_currentIndexChanged(const QString &arg1)
{
    if (arg1.compare(QString("Normal")) == 0)
        dynamic = QString("Normal");
    else if (arg1.compare(QString("Forte")) == 0) // sets the dynamic based on the Slot.
        dynamic = QString("Forte");
    else if (arg1.compare(QString("Piano")) == 0)
        dynamic = QString("Piano");
}

void pianowidget::on_removeButton_clicked()
{
    qDeleteAll(ui->inputList->selectedItems()); // deletes all selected items from the input list.
    ui->outputList->clear();
    ui->currentScaleLabel->setText("None");
}

void pianowidget::on_checkStaccato_stateChanged(int arg1)
{
    if (arg1 == 2)
        staccato = true; // sets staccato state.
    else
        staccato = false;
}

void pianowidget::on_ambiguationCombo_currentIndexChanged(const QString &arg1)
{
    QString select_scale = arg1;
    select_scale.replace(" ", ""); // if the ambiguation is changed, sets it to the new ambiguation.
    scale = select_scale;
}

void pianowidget::on_scalePlayButton_clicked()
{
    QFile file(":/piano/assets/piano_scales");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    QString scale_line; // reads through the scales text file.
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list = line.split(",");
        if (list.at(0).compare(scale) == 0) { // splits at the commas and creates a new QString
            scale_line = line;
            break;
        }
    }
    QStringList note_list = scale_line.split(","); // splits the list of strings at commas.
    note_list.removeFirst();
    QString messageBoxText = "";
    for (QString i:note_list) {
        if (i.contains("1")) {
            i.replace("1", "");
            messageBoxText.append(i+"4" + " "); //appends the note name plus the default octave if it has a 1 in it.

        }
        else {
            messageBoxText.append(i+"3" + " "); // else appends 3.
        }
    }
    QMessageBox showScale;

    showScale.setText(messageBoxText);
    showScale.setStandardButtons(QMessageBox::Ok);
    showScale.show(); // creates a message box to show the notes in the scale.

    for (QString i:note_list) {
        if (i.contains("1")) {
            i.replace("1", "");
            QString note_file(":/piano/assets/" + i + "4" + ".wav"); // plays each note and delays it by 300.
            QSound::play(note_file);
        }
        else {
            QString note_file(":/piano/assets/" + i + "3" + ".wav");
            QSound::play(note_file);
        }
        this->delay(300);
    }
}


void pianowidget::on_outputList_itemDoubleClicked(QListWidgetItem *item)
{
    QStringList notes = item->text().split(" ");
    for (int i = 0; i < notes.size(); i++) {
        if (notes.at(i).size() <= 3)
            playBack(notes.at(i)); // plays back the output list item
        else
            outputScale = notes.at(i);
    }

    ui->scaleLabelOutput->setText(outputScale); // sets the current scale text
}


void pianowidget::on_inputList_itemClicked(QListWidgetItem *item)
{
    on_inputList_itemDoubleClicked(item); // calls double clicked.
}


void pianowidget::on_outputList_itemClicked(QListWidgetItem *item)
{
    on_outputList_itemDoubleClicked(item);// calls double clicked.
}

void pianowidget::on_bpmSlider_sliderMoved(int position)
{
    metronomeBpm = position; // sets metronomeBpm to the new position.
}

void pianowidget::playTick()
{
    static QSound *ticker;
    if (!isNew) {
        delete ticker; // deletes pointer to ticker
    }

    if (init)
         ticker = new QSound("qrc:/piano/assets/metronomeTick.wav"); // gets the metronomeTick wav to a ticker.
    else {
        if (!deletion) {
            ticker->play(); // plays ticker
        }
        else {
            ticker->stop(); // stop ticker.
        }
    }
}



void pianowidget::on_exampleSongWriter_clicked()
{
    QListWidgetItem *item = ui->outputList->currentItem();
    if (item) {
        QString note_list = item->text();
        QStringList notes = note_list.split(" "); // splits the text at space

        Chord selection = Chord(outputScale.toStdString());
        for (int i = 0; i < notes.size(); i++) {
            if (notes.at(i).size() <= 3){
                playBack(notes.at(i)); // play back notes of the feedback
                std::string notestring = notes.at(i).toStdString(); //
                int oct;
                std::string note_part;
                if (notestring.size() == 3) {
                    oct = notestring.at(2) - '0';
                    note_part = notestring.substr(0,2);
                }
                else {
                    oct = notestring.at(1) - '0';
                    note_part = notestring.substr(0,1);
                }
                Note note = Note(note_part, oct);
                selection.insertNote(note); // recreates the Chord object like before.
            }
        }
        makeSong songMaker = makeSong(); // calls makeSong object
        std::vector<Chord> song;
        if (outputScale.contains("Major")) {
            song = songMaker.makeMajor(selection); // calls the song writer based on major or minor
        }
        else
            song = songMaker.makeMinor(selection);

        for (Chord i: song) { // for each chord in song.
            std::vector<Note> current_note = i.returnNoteVector();
            for (Note j: current_note) {
                QString note_id = QString::fromStdString(j.returnNoteName()) + QString::number(j.returnOctave());
                if (QFile::exists(":/trumpet/assets/trumpet_" + note_id+ ".wav")) { // play the note file.
                    playBack(note_id);
                }
            }
//            QRandomGenerator generate = QRandomGenerator();
//            int interval = generate.bounded(250,600);

            delay(400); // delay by set interval made from random number generator.
        }
    }
}

