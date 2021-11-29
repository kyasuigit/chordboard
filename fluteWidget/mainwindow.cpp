#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    recording = false;

    // Initialize the octave to 4.
    octave = 4;

    arpeggio = false;

    minorOrMajor = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete currentItem;

}

// This will handle if a specific item has been clicked in the note selection widget.
void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item){
    currentItem -> setText (currentItem -> text() + item -> text() + "  ");
    // We will grab the item and play the sound. If recording is on, we will add to the item list.
    QSound::play (":/music_resources/flute_" + item -> text() + "_1_forte_normal.wav");
}

// If the combo box has been activated. This will need to call a function to build the listwidget that holds all the notes.
void MainWindow::on_comboBox_activated(int index){

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
void MainWindow::createList (int octave){

    std::vector <std::string> octaveArray;

    if (octave == 4){
        octaveArray = {"C4", "Cs4", "Db4", "D4", "Ds4", "Eb4", "E4", "F4", "Fs4", "Gb4", "G4", "Gs4", "Ab4", "A4", "As4", "Bb4", "B4"};
    }

    else if (octave == 5){
        octaveArray= {"C5", "Cs5", "Db5", "D5", "Ds5", "Eb5", "E5", "F5", "Fs5", "Gb5", "G5", "Gs5", "Ab5", "A5", "As5", "Bb5", "B5"};
    }

    else if (octave == 6){
        octaveArray= {"C6", "Cs6", "Db6", "D6", "Ds6", "Eb6", "E6", "F6", "Fs6", "Gb6", "G6", "Gs6", "Ab6", "A6", "As6", "Bb6", "B6"};
    }

    else if (octave == 7){
        octaveArray = {"C7", "Cs7", "Db7", "D7", "Ds7", "Eb7", "E7", "F7"};
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
void MainWindow::on_radioButton_toggled(bool checked){
    if (checked){
        currentItem = new QListWidgetItem;
        recording = true;
        ui -> radioButton -> setText("Recording...");
    }

    else{
            ui -> radioButton -> setText("Record");
            if (currentItem -> text() != NULL){
                ui -> listWidget_2 -> addItem(currentItem);
        }
    }
}

// Clearing the history.
void MainWindow::on_pushButton_2_clicked(){
    ui -> listWidget_2 -> clear();
}

// Handling the arpeggio.
void MainWindow::on_checkBox_toggled(bool checked){
    arpeggio = checked;
}

// This handles the dealy that the system requires.
void MainWindow::delay(int msec){
    QTime deadTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < deadTime)
        QCoreApplication::processEvents (QEventLoop::AllEvents, 100);
}

// This will handle if the user has clicked on an item in the history.
void MainWindow::on_listWidget_2_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    for (int i = 0; i < newList.size(); i++){
        if (arpeggio == true){
            QSound::play (":/music_resources/flute_" + newList.at(i) + "_1_forte_normal.wav");
            delay(100);
        }
        else{
            QSound::play (":/music_resources/flute_" + newList.at(i) + "_1_forte_normal.wav");
        }
    }
}

// Handling when the user wishes to delete a single item from the history.
void MainWindow::on_pushButton_clicked(){
    QList<QListWidgetItem*> items = ui->listWidget_2 ->selectedItems();
    foreach (QListWidgetItem *items, items){
        delete ui->listWidget_2-> takeItem(ui->listWidget_2->row(items));
    }
}


// Handling if the user has selected a major or minor chord song recommendation.
void MainWindow::on_comboBox_2_activated(int index){
    minorOrMajor = index;
}

// Handling if the user wishes to generate a new song recommendation.
void MainWindow::on_pushButton_4_clicked(){
    // We need to make sure that there is a selected history and they have selected a minor or major.
    QList<QListWidgetItem*> items = ui->listWidget_2 ->selectedItems();
    foreach (QListWidgetItem *items, items){
        // Instead of deleting the items we can just make a call to the make song given the selection from the user.
        // We want to make a chord and pass that to the function with all the given notes?

        QString str = items -> text();
        QRegExp rx ("[ ]");
        QStringList newList = str.split (rx, QString::SkipEmptyParts);

        // Looping through all the items in the list.
        for (int i =0; i < newList.size(); i++){


                Note *newNote = new Note (newList.at(i).toStdString(), 1);

                findChord *thisFind = new findChord ();

                std::string selectionMinor = "minor";

                if (minorOrMajor == 1){
                    selectionMinor = "major";
                }

                Chord thisChord = thisFind -> makeSong(*newNote, selectionMinor, 10);

                // We need to loop through the items in the new chord to populate the recommendations section.
        }
    }
}

