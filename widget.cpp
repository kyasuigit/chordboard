#include "widget.h"
#include "ui_widget.h"

/// @file widget.cpp
/// @brief This class is used to create and maintain a flute ui. It contains all the methods
/// necessary to allow the user to play flute sounds, record flute notes, and maintain a histroy of flute notes.
/// This class also implements the flute backend so the flute ui is able to display song recommendations given the note input.
/// @authors Kevin Yang, Kohei Yasui


Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget){
    ui->setupUi(this);
    recording = false; // Keeping track of recording.

    // Initialize the octave to 4.
    octave = 4;
    arpeggio = false; // Keeping track of the arpeggio.
    minorOrMajor = "minor"; // Keeping track if the user wishes to generate a major or minor song.
    sizeOfSong = 0; // Keeping track of the song length.

    // Elements to create and maintain the metronome.
    metronomeBpm = 60;
    isNew = true;
    init = true;
    playTick();
    init = false;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::playTick);
}


Widget::~Widget(){
    delete ui;
    delete currentItem;
    isNew = false;
    playTick();

}


QWidget *Widget::returnFluteWidget(){
    return ui->fluteWidgetBox;
}


void Widget::on_listWidget_itemClicked(QListWidgetItem *item){
    // If the user has selected to record.
    if (recording){
        currentItem -> setText (currentItem -> text() + item -> text() + "  "); // Adding text to the current item.
    }
    // We will grab the item and play the sound.
    QSound::play (":/flute/assets/flute_" + item -> text() + "_1_forte_normal.wav");
}


void Widget::on_comboBox_activated(int index){

    // Clear the list view so we can display a new list of notes in the given octave.
    ui->listWidget ->clear();

    // Setting the octave by grabbing the index. Each time, call the createList method.
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


void Widget::createList (int octave){
    // String vector for the notes. File reading was broken so this was the only workaround.
    std::vector <std::string> octaveArray;

    // Generating the string vector.
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

    // Making a new item to store the notes.
    QListWidgetItem *newItem = new QListWidgetItem();

    // Adding to the listwidget.
    for (int x = 0; x < (int)octaveArray.size(); x++){
        newItem -> setText(QString::fromStdString(octaveArray.at(x)));
        ui -> listWidget -> addItem(newItem);
        newItem = new QListWidgetItem();
    }

    delete (newItem); // Freeing memory from the item created.
}


void Widget::on_radioButton_toggled(bool checked){
    // If the user has selected to record.
    if (checked){
        currentItem = new QListWidgetItem; // Create a new current item.
        recording = true; // Set recording to true.
        ui -> radioButton -> setText("Recording..."); // Change the name of the toggle.
    }
    // Otherwise the user wishes to stop recording.
    else{
            ui -> radioButton -> setText("Record");
            recording = false;
            // Add the item to the view if it is not empty.
            if (currentItem -> text() != NULL){
                ui -> listWidget_2 -> addItem(currentItem);
        }
    }
}


void Widget::on_pushButton_2_clicked(){
    ui -> listWidget_2 -> clear();
}


void Widget::on_checkBox_toggled(bool checked){
    arpeggio = checked;
}


void Widget::delay(int msec){
    QTime deadTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < deadTime)
        QCoreApplication::processEvents (QEventLoop::AllEvents, 1000);
}


void Widget::on_listWidget_2_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    // Looping through the notes in the history item and playing the notes.
    for (int i = 0; i < newList.size(); i++){
        if (arpeggio == true){
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
            delay(400);
        }
        else{
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
        }
    }
}


void Widget::on_pushButton_clicked(){
    QList<QListWidgetItem*> items = ui->listWidget_2 ->selectedItems();
    // For each selected item, delete it from the history QListWidget.
    foreach (QListWidgetItem *items, items){
        delete ui->listWidget_2-> takeItem(ui->listWidget_2->row(items));
    }
}


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


void Widget::on_pushButton_4_clicked(){

    // Grab the selected history item and make some recommendations
    QList<QListWidgetItem*> items = ui->listWidget_2 ->selectedItems();

    // For each item in the history item.
    foreach (QListWidgetItem *items, items){

        QString str = items ->text();
        QRegExp rx ("[ ]");
        QStringList newList = str.split (rx, QString::SkipEmptyParts);

        // For each note in the given history item
        for (int i = 0; i < newList.size(); i++){

            // Create a pointer so we can grab the octave of the note.
            const QString *pointer = &newList.at(i);

            QListWidgetItem * listItem = new QListWidgetItem;

            // We need to chop off the end of the string so we only have the ending portion.
            QStringRef valueOfOctave = pointer -> rightRef(1);

           // Generate a new Qstring that has only the note.
           QString noteString = (QString::fromStdString(newList.at(i).toStdString())).chopped(2);

           // Creating a new note with the given parameters.
            Note *thisNote = new Note (noteString.toStdString(), valueOfOctave.toInt());

            // Creating a new chord and calling the make song method.
            findChord *thisChord = new findChord ();
            Chord output=  thisChord -> makeSong(*thisNote, minorOrMajor, sizeOfSong);

            // Create a vector of notes that  takes in the note vector from the method.
            std::vector <Note> thisVector = output.returnNoteVector();

            // Looping through the note vector and appending it to the item to add to the ui.
            for (int x =0; x < (int)thisVector.size(); x++){

                // We need to check if the note that is recommend exists. If it does then we accept otherwise do nothing.
                QFileInfo check_file(":/flute/assets/flute_" + (QString::fromStdString(thisVector.at(x).returnNoteName()) + QString::number(valueOfOctave.toInt())) + "_1_forte_normal.wav");
                if(check_file.exists()){
                     listItem -> setText (listItem -> text() + QString::fromStdString(thisVector.at(x).returnNoteName()) +  QString::number(valueOfOctave.toInt()) + " ");
                  }
                else{
                    // Otherwise just continue.
                    continue;
                }
            }

            if (listItem -> text() != NULL){
                // Item is added only if it is not empty.
                ui->listWidget_3->addItem (listItem);
            }

            // Making a new copy in memory.
            listItem = new QListWidgetItem;
            thisChord = new findChord ();

            // Freeing memory so we don't have any leaks.
            delete (listItem);
            delete (thisNote);
            delete (thisChord);
        }
    }
}


void Widget::on_spinBox_valueChanged(int arg1){
    sizeOfSong = arg1;
}


void Widget::on_listWidget_3_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    // For each note in the section, play the note.
    for (int i = 0; i < newList.size(); i++){
        if (arpeggio == true){
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
            delay(400);
        }
        else{
            QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
        }
    }
}


void Widget::on_pushButton_5_clicked(){

    // Loop through all items and grab the list items and play the sounds.
    for (int x =0; x < ui->listWidget_3->count(); x++){
        QListWidgetItem *item = ui -> listWidget_3 -> item(x);

        // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
        QString str = item->text();
        QRegExp rx ("[ ]");
        QStringList newList = str.split (rx, QString::SkipEmptyParts);

        // Looping through each item.
        for (int i = 0; i < newList.size(); i++){
            if (arpeggio == true){
                QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
                // Playing with a larger delay.
                int randomNumber = 2000;
                delay(randomNumber);
            }
            else{
                QSound::play (":/flute/assets/flute_" + newList.at(i) + "_1_forte_normal.wav");
            }
        }
        // Play with a large delay.
        int randomNumber = 2000;
        delay(randomNumber);
    }
}


void Widget::on_pushButton_3_clicked(){
    ui -> listWidget_3  ->clear();
}


void Widget::on_pushButton_6_clicked(){

    // Opening an image in the helpbox.
    QPixmap pm(":/flute/assets/flute_hint.jpg");
    QMessageBox helpBox;

    // Setting the title and executing the window.
    helpBox.setWindowTitle("Flute Help");
    helpBox.setStandardButtons (QMessageBox::Ok);
    helpBox.setIconPixmap(pm);

    helpBox.exec();
}


void Widget::on_metronomeButton_toggled(bool checked){
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


void Widget::on_bpmSlider_sliderMoved(int position){
    metronomeBpm = position;
}


void Widget::playTick(){
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

