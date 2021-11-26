#include "drum_widget.h"
#include "ui_drum_widget.h"



drum_widget::drum_widget(QWidget *parent) : QWidget(parent), ui(new Ui::drum_widget)
{
    ui->setupUi(this);
    openOrClosed = false; // Determining if the hihat is closed or open.
    music = new QMediaPlayer();

    // Initialize our dynamic string class. Allocate for one string.
    historyArray = new std::string;

    recording = false; // Not recording right now.

    // We can have a string and continually add to it. This string will be used for creating the
    // qlistitem

    arpeggio = false;
}

drum_widget::~drum_widget()
{
    delete ui;
    delete music; // Freeing memory from the music player
    delete historyArray; // Freeing memory from the history array.

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


// This method will handle whether or not the user wishes to record their interactions with the system.
void drum_widget::on_radioButton_toggled(bool checked){
    if (checked == true){
        recording = true;
        currentItem = new QListWidgetItem();
    }
    else{
        recording = false;
        ui -> listWidget -> addItem (currentItem);
    }
}

// This will handle if the user wishes playback to be arpeggio.
void drum_widget::on_checkBox_3_toggled(bool checked){
    arpeggio = checked;
}

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

