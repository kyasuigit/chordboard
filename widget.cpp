#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    recording = false;

    // Initialize the octave to 4.
    octave = 4;

    arpeggio = false;

    minorOrMajor = "minor";

    sizeOfSong = 0;

    metronomeBpm = 60;
    isNew = true;
    init = true;
    playTick();
    init = false;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::playTick);
}

Widget::~Widget()
{
    delete ui;
    delete currentItem;
    isNew = false;
    playTick();

}

QWidget *Widget::returnFluteWidget()
{
    return ui->fluteWidgetBox;
}


// This will handle if a specific item has been clicked in the note selection widget.
void Widget::on_listWidget_itemClicked(QListWidgetItem *item){

    if (recording){
        currentItem -> setText (currentItem -> text() + item -> text() + "  ");
    }
    // We will grab the item and play the sound. If recording is on, we will add to the item list.
    QSound::play (":/flute/assets/flute_" + item -> text() + "_1_forte_normal.wav");
}

// If the combo box has been activated. This will need to call a function to build the listwidget that holds all the notes.
void Widget::on_comboBox_activated(int index){

    ui->listWidget ->clear();

    // Setting the octave.
    switch (index){
        case 1:
            octave = 4;
            createList (octave);
            break;
        case 2:
            octave = 5;
            createList (octave);
            break;
        case 3:
            octave = 6;
            createList (octave);
            break;
        case 4:
            octave = 7;
            createList(octave);
            break;
    }
}

// This will create the listwidget given the octave.
void Widget::createList (int octave){

    std::vector <std::string> octaveArray;

    switch (octave){
        case 4:
            octaveArray = {"C4", "C#4", "Db4", "D4", "D#4", "Eb4", "E4", "F4", "F#4", "Gb4", "G4", "G#4", "Ab4", "A4", "A#4", "Bb4", "B4"};
            break;
        case 5:
            octaveArray= {"C5", "C#5", "Db5", "D5", "D#5", "Eb5", "E5", "F5", "F#5", "Gb5", "G5", "G#5", "Ab5", "A5", "A#5", "Bb5", "B5"};
            break;
        case 6:
            octaveArray= {"C6", "C#6", "Db6", "D6", "D#6", "Eb6", "E6", "F6", "F#6", "Gb6", "G6", "G#6", "Ab6", "A6", "A#6", "Bb6", "B6"};
            break;
        case 7:
            octaveArray = {"C7", "C#7", "Db7", "D7", "D#7", "Eb7", "E7", "F7"};
            break;
    }

    QListWidgetItem *newItem = new QListWidgetItem();

    // Adding to the listwidget.
    for (int x = 0; x < (int)octaveArray.size(); x++){
        newItem -> setText(QString::fromStdString(octaveArray.at(x)));
        ui -> listWidget -> addItem(newItem);
        newItem = new QListWidgetItem();
    }

    delete (newItem);
}

// This will handle if the user wishes to record their interaction with the system.
void Widget::on_radioButton_toggled(bool checked){
    if (checked){
        currentItem = new QListWidgetItem;
        recording = true;
        ui -> radioButton -> setText("Recording...");
    }

    else{
            ui -> radioButton -> setText("Record");
            recording = false;
            if (currentItem -> text() != NULL){
                ui -> listWidget_2 -> addItem(currentItem);
        }
    }
}

// Clearing the history.
void Widget::on_pushButton_2_clicked(){
    ui -> listWidget_2 -> clear();
}

// Handling the arpeggio.
void Widget::on_checkBox_toggled(bool checked){
    arpeggio = checked;
}

// This handles the dealy that the system requires.
void Widget::delay(int msec){
    QTime deadTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < deadTime)
        QCoreApplication::processEvents (QEventLoop::AllEvents, 1000);
}

// This will handle if the user has clicked on an item in the history.
void Widget::on_listWidget_2_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    for (int i = 0; i < newList.size(); i++){
        if (arpeggio == true){
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
            delay(100);
        }
        else{
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
        }
    }
}

// Handling when the user wishes to delete a single item from the history.
void Widget::on_pushButton_clicked(){
    QList<QListWidgetItem*> items = ui->listWidget_2 ->selectedItems();
    foreach (QListWidgetItem *items, items){
        delete ui->listWidget_2-> takeItem(ui->listWidget_2->row(items));
    }
}


// Handling if the user has selected a major or minor chord song recommendation.
void Widget::on_comboBox_2_activated(int index){
    switch (index){
        case 0:
            minorOrMajor = "minor";
            break;
        case 1:
            minorOrMajor = "major";
            break;
    }
}

// Handling if the user wishes to generate a new song recommendation.
// This method needs a lot of work...
void Widget::on_pushButton_4_clicked(){

    // For now just hardcode to test functionality.

    // Class seems to "work" for the most part

    // Grab the selected history item and make some recommendations
    QList<QListWidgetItem*> items = ui->listWidget_2 ->selectedItems();

    foreach (QListWidgetItem *items, items){

        QString str = items ->text();
        QRegExp rx ("[ ]");
        QStringList newList = str.split (rx, QString::SkipEmptyParts);

        // For each note in the given history item
        for (int i = 0; i < newList.size(); i++){

            const QString *pointer = &newList.at(i);

            QListWidgetItem * listItem = new QListWidgetItem;

            // We need to chop off the end of the string so we only have the ending portion.
            // This octave selection is really just not it brotha.
            QStringRef valueOfOctave = pointer -> rightRef(1);

            // This changes the entire string as a whole.
           QString noteString = (QString::fromStdString(newList.at(i).toStdString())).chopped(2);

            Note *thisNote = new Note (noteString.toStdString(), valueOfOctave.toInt());

            findChord *thisChord = new findChord ();
            Chord output=  thisChord -> makeSong(*thisNote, minorOrMajor, sizeOfSong);

            std::cout<< thisNote->returnNoteName() << std::endl;

            std::vector <Note> thisVector = output.returnNoteVector();

            // Looping through the note vector and appending it to the item to add to the ui.
            for (int x =0; x < (int)thisVector.size(); x++){

                // We need to check if the note that is recommend exists. If it does then we accept otherwise do nothing.
                QFileInfo check_file(":/flute/assets/flute_" + (QString::fromStdString(thisVector.at(x).returnNoteName()) + QString::number(valueOfOctave.toInt())) + "_1_forte_normal.wav");
                if(check_file.exists()){
                     listItem -> setText (listItem -> text() + QString::fromStdString(thisVector.at(x).returnNoteName()) +  QString::number(valueOfOctave.toInt()) + " ");
                  }
                else{
                    continue;
                }
            }

            if (listItem -> text() != NULL){
                // Item is just not being added to literally anything for some reason
                ui->listWidget_3->addItem (listItem);
            }

            listItem = new QListWidgetItem;
            thisChord = new findChord ();

            delete (listItem);
            delete (thisNote);
            delete (thisChord);
        }
    }
}

// Handles the toggle for how long the usser wishes the song to be.
void Widget::on_spinBox_valueChanged(int arg1){
    sizeOfSong = arg1;
}

// Handling if the user has clicked on one of the recommendation items
void Widget::on_listWidget_3_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    for (int i = 0; i < newList.size(); i++){
        if (arpeggio == true){
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
            delay(100);
        }
        else{
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
        }
    }
}

// If the user wishes to play all the sounds in the recommendation list to form a sample song.
void Widget::on_pushButton_5_clicked(){

    // Loop through all items and grab the list items and play the sounds.
    for (int x =0; x < ui->listWidget_3->count(); x++){
        QListWidgetItem *item = ui -> listWidget_3 -> item(x);

        // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
        QString str = item->text();
        QRegExp rx ("[ ]");
        QStringList newList = str.split (rx, QString::SkipEmptyParts);

        for (int i = 0; i < newList.size(); i++){
            if (arpeggio == true){
                QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
                // Randommizing..
                int randomNumber = 2000;
                delay(randomNumber);
            }
            else{
                QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
            }
        }
        // Randomizing.
        int randomNumber = 2000;
        delay(randomNumber);
    }
}

// Handling if the recommendations list needs to be cleared.
void Widget::on_pushButton_3_clicked(){
    ui -> listWidget_3  ->clear();
}



void Widget::on_pushButton_6_clicked(){
    QPixmap pm(":/flute/assets/flute_hint.jpg");
    QMessageBox helpBox;

    helpBox.setWindowTitle("Flute Help");
    helpBox.setStandardButtons (QMessageBox::Ok);
    helpBox.setIconPixmap(pm);

    helpBox.exec();
}


void Widget::on_metronomeButton_toggled(bool checked)
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


void Widget::on_bpmSlider_sliderMoved(int position)
{
    metronomeBpm = position;
}

void Widget::playTick()
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

