#include "drum_widget.h"
#include "ui_drum_widget.h"



drum_widget::drum_widget(QWidget *parent) : QWidget(parent), ui(new Ui::drum_widget)
{
    ui->setupUi(this);
    openOrClosed = false; // Determining if the hihat is closed or open.
    music = new QMediaPlayer();

    recording = false; // Not recording right now.

    arpeggio = false;
}

drum_widget::~drum_widget()
{
    delete ui;
    delete music; // Freeing memory from the music player
    delete currentItem;
    delete recItem;
}

// This is the hihat button slot.
void drum_widget::on_pushButton_clicked(){
    if (openOrClosed == false){
        QSound::play("qrc:/sound_files/closed_hihat.wav");
        if (recording){

                currentItem-> setText (currentItem->text() + "closed_hihat  ");
        }
    }

    else{
        QSound::play("qrc:/sound_files/open_hihat.wav");

        if (recording){
                currentItem-> setText (currentItem->text() + "open_hihat  ");
        }
    }
}

// This is the crash cymbal button slot.
void drum_widget::on_pushButton_3_clicked(){
    QSound::play("qrc:/sound_files/crash_cymbal.wav");
    if (recording){
            currentItem-> setText (currentItem->text() + "crash_cymbal  ");
    }
}

// This is the snare drum button slot.
void drum_widget::on_pushButton_2_clicked(){
    QSound::play("qrc:/sound_files/snare.wav");
    if (recording){
            currentItem-> setText (currentItem->text() + "snare  ");
    }
}

// This is the high tom button slot.
void drum_widget::on_pushButton_6_clicked(){
    QSound::play("qrc:/sound_files/hi_tom.wav");
    if (recording){
            currentItem-> setText (currentItem->text() + "hi_tom  ");
    }
}

// This is the medium tom button slot.
void drum_widget::on_pushButton_5_clicked(){
    QSound::play ("qrc:/sound_files/medium_tom.wav");
    if (recording){
            currentItem-> setText (currentItem->text() + "medium_tom  ");
    }
}

// This is the ride cymbal button slot.
void drum_widget::on_pushButton_4_clicked(){
    QSound::play("qrc:/sound_files/ride_cymbal.wav");
    if (recording){
            currentItem-> setText (currentItem->text() + "ride_cymbal  ");
    }
}

// This is the floor tom button slot.
void drum_widget::on_pushButton_7_clicked(){
    QSound::play("qrc:/sound_files/floor_tom.wav");
    if (recording){
            currentItem-> setText (currentItem->text() + "floor_tom  ");
    }
}

// This is the bass drum button slot.
void drum_widget::on_pushButton_8_clicked(){
    QSound::play("qrc:/sound_files/bass_drum.wav");
    if (recording){
            currentItem-> setText (currentItem->text() + "bass_drum  ");
    }
}

// This method handles the toggle box for whether or not the hihat is toggled open or closed.
void drum_widget::on_checkBox_toggled(bool checked){
    openOrClosed = checked;
}

// This is used to generate the recommendations and display in the listwidget.
void drum_widget::createRecommendations(){
    // We call our drum backend so we can get the recommendations.
    drum thisDrum;
    for (int y= 0; y < 3; y ++){
        std::vector <int> noteRecommendations = thisDrum.returnNotes(7);
        for (int x= 0; x < (int)noteRecommendations.size(); x++){
            switch (noteRecommendations[x]){
                case 1:
                    recItem -> setText(recItem->text() + "closed_hihat  ");
                    break;
                case 2:
                    recItem -> setText(recItem->text() + "open_hihat  ");
                    break;
                case 3:
                    recItem -> setText(recItem->text() + "crash_cymbal  ");
                    break;
                case 4:
                    recItem -> setText(recItem->text() + "snare  ");
                    break;
                case 5:
                    recItem -> setText(recItem->text() + "hi_tom  ");
                    break;
                case 6:
                    recItem -> setText(recItem->text() + "medium_tom  ");
                    break;
                case 7:
                    recItem -> setText(recItem->text() + "ride_cymbal  ");
                    break;
                case 8:
                    recItem -> setText(recItem->text() + "floor_tom  ");
                    break;
                case 9:
                    recItem -> setText(recItem->text() + "bass_drum  ");
                    break;
            }
         }
        // Add to the ui.
        ui -> listWidget_2 ->addItem(recItem);
        recItem = new QListWidgetItem();
    }
}

// This method will handle whether or not the user wishes to record their interactions with the system.
void drum_widget::on_radioButton_toggled(bool checked){
    if (checked == true){
        ui -> radioButton -> setText("Recording...");
        recording = true;
        currentItem = new QListWidgetItem();
        recItem = new QListWidgetItem();
    }
    else{
        ui -> radioButton -> setText("Record");
        recording = false;
        if (currentItem -> text() != NULL){
            ui -> listWidget -> addItem (currentItem);
            drum_widget::createRecommendations();
        }
    }
}

// This will handle if the user wishes playback to be arpeggio.
void drum_widget::on_checkBox_3_toggled(bool checked){
    arpeggio = checked;
}

// This handles the dealy that the system requires.
void drum_widget::delay(int msec){
    QTime deadTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < deadTime)
        QCoreApplication::processEvents (QEventLoop::AllEvents, 100);
}

// Handling if the user has clicked on a item from the history. This will play the sounds from the given item.
void drum_widget::on_listWidget_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    for (int i = 0; i < newList.size(); i++){
        if (arpeggio == true){
            QSound::play ("qrc:/sound_files/" + newList.at(i) +  ".wav");
            delay(100);
        }
        else{
            QSound::play ("qrc:/sound_files/" + newList.at(i) +  ".wav");
        }
    }
}

// Handling if the history needs to be cleared.
void drum_widget::on_pushButton_9_clicked(){
    ui->listWidget -> clear();
}

// This is used to handle deleting individual items in the qlistwidget.
void drum_widget::on_pushButton_11_clicked(){
        QList<QListWidgetItem*> items = ui->listWidget ->selectedItems();
        foreach (QListWidgetItem *items, items){
            delete ui->listWidget-> takeItem(ui->listWidget->row(items));
    }
}

// This is used for when the user wishes to play a recommendation.
void drum_widget::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    for (int i = 0; i < newList.size(); i++){
        if (arpeggio == true){
            QSound::play ("qrc:/sound_files/" + newList.at(i) +  ".wav");
            delay(100);
        }
        else{
            QSound::play ("qrc:/sound_files/" + newList.at(i) +  ".wav");
        }
    }
}

// Clearing all of the recommendations.
void drum_widget::on_pushButton_10_clicked(){
    ui -> listWidget_2 -> clear();
}

// Handles if the user wishes to play all of the sounds rofm the recommendation qlistwidget.
void drum_widget::on_pushButton_12_clicked(){
    // Loop through all items and grab the list items and play the sounds.
    for (int x =0; x < ui->listWidget_2->count(); x++){
        QListWidgetItem *item = ui -> listWidget_2 -> item(x);

        // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
        QString str = item->text();
        QRegExp rx ("[ ]");
        QStringList newList = str.split (rx, QString::SkipEmptyParts);

        for (int i = 0; i < newList.size(); i++){
            if (arpeggio == true){
                QSound::play ("qrc:/sound_files/" + newList.at(i) +  ".wav");
                delay(100);
            }
            else{
                QSound::play ("qrc:/sound_files/" + newList.at(i) +  ".wav");
            }
        }
        delay(100);
    }
}


// Handling if a new UI needs to be made. This will call the other window.
void drum_widget::on_pushButton_13_clicked(){
    hintWindow newWindow;
    newWindow.setModal(true);
    newWindow.exec();
}

