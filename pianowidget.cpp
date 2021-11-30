#include "pianowidget.h"
#include "ui_pianowidget.h"

pianowidget::pianowidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pianowidget)
{
    ui->setupUi(this);
    this->octave = ui->octaveCombo->currentText();
    currentChord = Chord("CMajor");
    record = false, arpeggio = false, staccato = false, chordPlay = false;
    alreadyRecorded = false;
    scale = QString("CMajor");
    dynamic = "Normal";
    metronomeBpm = 60;
    isNew = true;
    init = true;
    playTick();
    init = false;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &pianowidget::playTick);


    connect(ui->C, &QPushButton::clicked, this, &pianowidget::playNote);
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
    delete ui;
    isNew = false;
    playTick();
}

QGroupBox* pianowidget::returnWidget()
{
    return ui->pianoInterfaceBox;
}

void pianowidget::on_metronomeButton_clicked(bool checked)
{
    if (checked) {
        ui->metronomeButton->setText("On");
        float bpm = 60.0 / metronomeBpm * 1000;

        deletion = false;
        timer->start(bpm);
    }
    else {
        ui->metronomeButton->setText("Off");  
        timer->stop();
        deletion = true;
        playTick();
    }
}

void pianowidget::playNote()
{

    QPushButton* note = qobject_cast<QPushButton*>(sender());
    if(!note) return;

    QString notename = note->objectName();


    if (notename.contains(QString("S"))) {
        notename.replace(QString("S"), QString("#"));
    }

    if (notename.contains(QString("2"))) {
        notename.remove(QString("2"));
        if (this->octave != "0")
            notename.append(this->octave.at(2));
        else
            notename.append(this->octave.at(0));
    }

    else {
        if (this->octave != "0")
            notename.append(this->octave.at(0));
    }

    if (QFile::exists(":/piano/assets/" + notename + ".wav")) {
        QSoundEffect play;
        QString file(":/piano/assets/" + notename + ".wav");
        play.setSource(QUrl::fromLocalFile(file));
        if (dynamic == QString("Forte"))
            play.setVolume(1.0f);
        else if (dynamic == QString("Normal"))
            play.setVolume(0.5f);
        else if (dynamic == QString("Piano")) {
            play.setVolume(0.25f);
        }

        play.play();

        if (record) {
            std::string fullStr = notename.toStdString();
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

            Note newNote = Note(noteStr, oct);
            currentChord.insertNote(newNote);
        }
        QEventLoop loop;
        loop.exec();
    }
}

void pianowidget::on_octaveCombo_currentIndexChanged(const QString &arg1)
{
    this->octave = arg1;
}


void pianowidget::on_recordButton_toggled(bool checked)
{
    if (checked) {
        record = true;
        ui->recordButton->setText("Recording...");
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
    if (ui->recordButton->isChecked()) {
        this->on_recordButton_toggled(false);
        ui->recordButton->toggle();
    }
    std::string input = "";
    std::vector<Note> notes = currentChord.returnNoteVector();
    if (!notes.empty()) {
        for (Note i:notes) {
            input.append(i.returnNoteName() + std::to_string(i.returnOctave()) + " ");
        }
        input.pop_back();

        input.append(" " + scale.toStdString());

        ui->inputList->addItem(QString::fromStdString(input));
        inputScale = scale;
        this->output(QString::fromStdString(input));

        currentChord = Chord(inputScale.toStdString());
    }
}


void pianowidget::on_inputList_itemDoubleClicked(QListWidgetItem *item)
{
    QStringList notes = item->text().split(" ");
    Chord selection = Chord(scale.toStdString());
    for (int i = 0; i < notes.size(); i++) {
        if (notes.at(i).size() <= 3){
            playBack(notes.at(i));
            std::string notestring = notes.at(i).toStdString();
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
            selection.insertNote(note);
        }
        else {
            inputScale = notes.at(i);
        }
    }
    createList(selection);
}

void pianowidget::playBack(QString note)
{
    if (QFile::exists(":/piano/assets/" + note + ".wav")) {

        QString file(":/piano/assets/" + note + ".wav");

        if (staccato) {
            QSound player(file);
            player.play();
            this->delay(350);
            player.stop();
            this->delay(120);
            player.deleteLater();
        }
        else if (arpeggio && !staccato) {
            QSound::play(file);
            this->delay(180);
        }
        else {
            QSound::play(file);
        }
    }
}

void pianowidget::on_clearButton_clicked()
{
    ui->inputList->clear();
    ui->outputList->clear();
}

void pianowidget::delay(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void pianowidget::output(QString input)
{
    Chord inputChord(inputScale.toStdString());
    QStringList notes = input.split(" ");
    for (int i = 0; i < notes.size(); i++) {
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
    createList(inputChord);

}

void pianowidget::createList(Chord input)
{
    ui->outputList->clear();
    findChord backend = findChord(input);
    std::vector <Chord> output;
    if (scale.contains("Major"))
        output = backend.findMajor(input);
    else
        output = backend.findMinor(input);

    for (Chord i:output) {
        QString list("");
        for (Note j:i.returnNoteVector()) {
            list.append(QString::fromStdString(j.returnNoteName() + std::to_string(j.returnOctave()) + " "));
        }
        int pos = list.lastIndexOf((QChar(' ')));
        list.remove(pos);



        QString list_item_scale;
        if (scale.contains("Major"))
            list_item_scale = QString::fromStdString(i.returnKey(i.returnNoteVector().at(0), true));
        else
            list_item_scale = QString::fromStdString(i.returnKey(i.returnNoteVector().at(0), false));

        list_item_scale.remove(" ");
        list.append(list_item_scale);

        ui->outputList->addItem(list);
    }
}


void pianowidget::on_arpeggioCheck_stateChanged(int arg1)
{
    if (arg1 == 2) {
        arpeggio = true;
        ui->checkStaccato->setEnabled(true);
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
    else if (arg1.compare(QString("Forte")) == 0)
        dynamic = QString("Forte");
    else if (arg1.compare(QString("Piano")) == 0)
        dynamic = QString("Piano");
}

void pianowidget::on_removeButton_clicked()
{
    qDeleteAll(ui->inputList->selectedItems());
    ui->outputList->clear();
    ui->currentScaleLabel->setText("None");
}

void pianowidget::on_checkStaccato_stateChanged(int arg1)
{
    if (arg1 == 2)
        staccato = true;
    else
        staccato = false;
}

void pianowidget::on_ambiguationCombo_currentIndexChanged(const QString &arg1)
{
    QString select_scale = arg1;
    select_scale.replace(" ", "");
    scale = select_scale;
}

void pianowidget::on_scalePlayButton_clicked()
{
    QFile file(":/piano/assets/piano_scales");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    QString scale_line;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list = line.split(",");
        if (list.at(0).compare(scale) == 0) {
            scale_line = line;
            break;
        }
    }
    QStringList note_list = scale_line.split(",");
    note_list.removeFirst();
    QString messageBoxText = "";
    for (QString i:note_list) {
        if (i.contains("1")) {
            i.replace("1", "");
            messageBoxText.append(i+"4" + " ");

        }
        else {
            messageBoxText.append(i+"3" + " ");
        }
    }
    QMessageBox showScale;

    showScale.setText(messageBoxText);
    showScale.setStandardButtons(QMessageBox::Ok);
    showScale.show();

    for (QString i:note_list) {
        if (i.contains("1")) {
            i.replace("1", "");
            QString note_file(":/piano/assets/" + i + "4" + ".wav");
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
            playBack(notes.at(i));
        else
            outputScale = notes.at(i);
    }

    ui->scaleLabelOutput->setText(outputScale);
}


void pianowidget::on_inputList_itemClicked(QListWidgetItem *item)
{
    on_inputList_itemDoubleClicked(item);
}


void pianowidget::on_outputList_itemClicked(QListWidgetItem *item)
{
    on_outputList_itemDoubleClicked(item);
}


void pianowidget::on_bpmSlider_sliderMoved(int position)
{
    metronomeBpm = position;
}

void pianowidget::playTick()
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



void pianowidget::on_exampleSongWriter_clicked()
{
    QListWidgetItem *item = ui->outputList->currentItem();
    if (item) {
        QString note_list = item->text();
        QStringList notes = note_list.split(" ");

        Chord selection = Chord(outputScale.toStdString());
        for (int i = 0; i < notes.size(); i++) {
            if (notes.at(i).size() <= 3){
                playBack(notes.at(i));
                std::string notestring = notes.at(i).toStdString();
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
                selection.insertNote(note);
            }
        }
        makeSong songMaker = makeSong();
        std::vector<Chord> song;
        if (outputScale.contains("Major")) {
            song = songMaker.makeMajor(selection);
        }
        else
            song = songMaker.makeMinor(selection);

        for (Chord i: song) {
            std::vector<Note> current_note = i.returnNoteVector();
            for (Note j: current_note) {
                QString note_id = QString::fromStdString(j.returnNoteName()) + QString::number(j.returnOctave());
                if (QFile::exists(":/trumpet/assets/trumpet_" + note_id+ ".wav")) {
                    playBack(note_id);
                }
            }
            QRandomGenerator generate = QRandomGenerator();
            int interval = generate.bounded(250,600);

            delay(interval);
        }
    }

}

