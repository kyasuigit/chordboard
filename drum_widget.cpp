#include "drum_widget.h"
#include "ui_drum_widget.h"

/// @file drum_widget.cpp
/// @brief This class is used to create and maintain a drum ui. It contains all the methods
/// necessary to allow the user to play drum sounds, record drum notes, and maintain a histroy of drum notes.
/// This class also implements the drum backend so the drums ui is able to display song recommendations given the note input.
/// @authors Kevin Yang, Kohei Yasui
drum_widget::drum_widget(QWidget *parent) : QWidget(parent), ui(new Ui::drum_widget){
   
    // Specifying the initial bpm for the metronome.
    metronomeBpm = 60;

    ui->setupUi(this); // Set up the ui.
    openOrClosed = false; // Determining if the hihat is closed or open.
    music = new QMediaPlayer();

    recording = false; // Not recording right now.

    arpeggio = false; // Not asking to play in arpeggio initially.

    // Used to create and maintain the metronome.
    isNew = true;
    init = true;
    playTick();
    init = false;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &drum_widget::playTick);
}


drum_widget::~drum_widget(){
    delete ui; // Deleting the ui.
    delete music; // Delete the music player.
    delete currentItem; // Deleting the current item.
    delete recItem; // Deleting the recording item.

    // Deleting the objects used for the metronome.
    isNew = false;
    playTick();
    delete timer;
}


QWidget *drum_widget::returnDrumWidget(){
    return ui->drumWidget;
}


void drum_widget::on_pushButton_clicked(){
   // If the hi hat is closed.
   if (openOrClosed == false){
        QSound::play(":/drum/assets/closed_hihat.wav"); // Play the sound file.
        if (recording){
		// If recording then add.
                currentItem-> setText (currentItem->text() + "closed_hihat  ");
        }
    }
    // Otherise the hi hat is open.
    else{
        QSound::play(":/drum/assets/open_hihat.wav"); // Play a different sound file.
	// If recording.
        if (recording){
                currentItem-> setText (currentItem->text() + "open_hihat  ");
        }
    }
}


void drum_widget::on_pushButton_3_clicked(){
    // Playing the sound.
    QSound::play(":/drum/assets/crash_cymbal.wav");
    // If the system is recording.
    if (recording){
            currentItem-> setText (currentItem->text() + "crash_cymbal  ");
    }
}


void drum_widget::on_pushButton_2_clicked(){
    // Playing the sound file.
    QSound::play(":/drum/assets/snare.wav");
    // If recording.
    if (recording){
            currentItem-> setText (currentItem->text() + "snare  ");
    }
}


void drum_widget::on_pushButton_6_clicked(){
     // Playing the sound file.
     QSound::play(":/drum/assets/hi_tom.wav");
     // If recording.
     if (recording){
	      currentItem-> setText (currentItem->text() + "hi_tom  ");
     }
}


void drum_widget::on_pushButton_5_clicked(){
    // Playing a sound.
    QSound::play (":/drum/assets/medium_tom.wav");
    if (recording){
	    // If recording is on.
            currentItem-> setText (currentItem->text() + "medium_tom  ");
    }
}


void drum_widget::on_pushButton_4_clicked(){
    QSound::play(":/drum/assets/ride_cymbal.wav"); // Playing a sound.
    if (recording){
	    // If recording is on.
            currentItem-> setText (currentItem->text() + "ride_cymbal  ");
    }
}


void drum_widget::on_pushButton_7_clicked(){
    QSound::play(":/drum/assets/floor_tom.wav"); // Playing a sound.
    if (recording){
	    // If recording is on.
            currentItem-> setText (currentItem->text() + "floor_tom  ");
    }
}


void drum_widget::on_pushButton_8_clicked(){
    QSound::play(":/drum/assets/bass_drum.wav"); // Playing a sound file.
    if (recording){
	    // If recording is on.
            currentItem-> setText (currentItem->text() + "bass_drum  ");
    }
}


void drum_widget::on_checkBox_toggled(bool checked){
    openOrClosed = checked;
}


void drum_widget::createRecommendations(){
    // We call our drum backend so we can get the recommendations.
    drum thisDrum;
    
    // Looping 3 times so we can make 3 recommendations per call.
    for (int y= 0; y < 3; y ++){
        std::vector <int> noteRecommendations = thisDrum.returnNotes(7); // Creating a vector of integers for recommendations.
        // Looping through the integer array and associating each integer with a part of the drum.
       	for (int x= 0; x < (int)noteRecommendations.size(); x++){
           // Using a switch statement for efficiency.
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
        // Add to the recommendations to the UI listwidget.
        ui -> listWidget_2 ->addItem(recItem);
        recItem = new QListWidgetItem(); // Setting the current item to a new item so it can be added again.
    }
}


void drum_widget::on_radioButton_toggled(bool checked){
    
    // If it has been toggled.
    if (checked == true){
	// Change the text.
        ui -> radioButton -> setText("Recording...");
        recording = true; // Set recording to true.
	// Create new items in dynamic memory so items can be added to the history and recommendations.
        currentItem = new QListWidgetItem();
        recItem = new QListWidgetItem();
    }

    // Otherwise the toggle has just be unselected.
    else{
        ui -> radioButton -> setText("Record"); // Set the text back to normal.
        recording = false; // Set recording to false.
        if (currentItem -> text() != NULL){
 	    // If the item has text (not empty), then we add it to the history.
            ui -> listWidget -> addItem (currentItem);
            drum_widget::createRecommendations(); // Calling the create recommendations method.
        }
    }
}


void drum_widget::on_checkBox_3_toggled(bool checked){
    arpeggio = checked; // Setting arpeggio variable to the status of the checkbox.
}


void drum_widget::delay(int msec){
    // Using a timer to ensure that the system will delay given the initial integer argument.
    QTime deadTime = QTime::currentTime().addMSecs(msec);
    while (QTime::currentTime() < deadTime)
        QCoreApplication::processEvents (QEventLoop::AllEvents, 100);
}


void drum_widget::on_listWidget_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    // Looping through the QStringList and playing each sound.
    for (int i = 0; i < newList.size(); i++){
         // If the user wishes to play with an arpeggio.
	 if (arpeggio == true){
            QSound::play (":/drum/assets/" + newList.at(i) +  ".wav");
            delay(100);
        }
	// Otherwise play the sound.
        else{
            QSound::play (":/drum/assets/"  + newList.at(i) +  ".wav");
        }
    }
}


void drum_widget::on_pushButton_9_clicked(){
    ui->listWidget -> clear();
}


void drum_widget::on_pushButton_11_clicked(){
	// Making a QList of QListWidgetItems for all the selected items.
        QList<QListWidgetItem*> items = ui->listWidget ->selectedItems();
        foreach (QListWidgetItem *items, items){
	    // Deleting all of the items that are selected from the history.
            delete ui->listWidget-> takeItem(ui->listWidget->row(items));
    }
}


void drum_widget::on_listWidget_2_itemClicked(QListWidgetItem *item){
    // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
    QString str = item->text();
    QRegExp rx ("[ ]");
    QStringList newList = str.split (rx, QString::SkipEmptyParts);

    // Looping through the items and playing the sounds.
    for (int i = 0; i < newList.size(); i++){
        // If arpeggio is selected, play with a delay.
	if (arpeggio == true){
            QSound::play (":/drum/assets/"  + newList.at(i) +  ".wav");
            delay(100);
        }
        else{
	    // Playing with no delay.
            QSound::play (":/drum/assets/"  + newList.at(i) +  ".wav");
        }
    }
}


void drum_widget::on_pushButton_10_clicked(){
    ui -> listWidget_2 -> clear(); // Clearing the QListWidget.
}


void drum_widget::on_pushButton_12_clicked(){
    // Loop through all items and grab the list items and play the sounds.
    for (int x =0; x < ui->listWidget_2->count(); x++){
        QListWidgetItem *item = ui -> listWidget_2 -> item(x);

        // We will grab the item's name, parse it, then, depending on the state of arpeggio, play with or without a delay.
        QString str = item->text();
        QRegExp rx ("[ ]");
        QStringList newList = str.split (rx, QString::SkipEmptyParts);

	// Looping through to play all the sounds.
        for (int i = 0; i < newList.size(); i++){
            if (arpeggio == true){
                QSound::play (":/drum/assets/"  + newList.at(i) +  ".wav");
                delay(100);
            }
            else{
                QSound::play (":/drum/assets/"  + newList.at(i) +  ".wav");
            }
        }
        delay(100); // Adding a delay between recommendation playback.
    }
}


void drum_widget::on_pushButton_13_clicked(){
    // Creating a new window and executing it.
    hintWindow newWindow;
    newWindow.setModal(true);
    newWindow.exec();
}


void drum_widget::on_bpmSlider_sliderMoved(int position){
    metronomeBpm = position;
}


void drum_widget::playTick(){
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


void drum_widget::on_metronomeButton_clicked(bool checked){
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
