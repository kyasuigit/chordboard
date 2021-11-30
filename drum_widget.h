#ifndef DRUM_WIDGET_H
#define DRUM_WIDGET_H

#include <QWidget>
#include <QListView>
#include <QMediaPlayer>
#include <string>
#include <QListWidgetItem>
#include <QListWidget>
#include <QString>
#include <QList>
#include <QStringList>
#include <QRegExp>
#include <iostream>
#include <unistd.h>
#include <QSound>
#include <QTimer>
#include <QtAlgorithms>
#include <QTime>
#include "drum.h"
#include <climits>
#include "hintwindow.h"

/// @file drum_widget.h
/// @brief This class is used to create and maintain a drum ui. It contains all the methods
/// necessary to allow the user to play drum sounds, record drum notes, and maintain a histroy of drum notes.
/// This class also implements the drum backend so the drums ui is able to display song recommendations given the note input.
/// @authors Kevin Yang, Kohei Yasui

QT_BEGIN_NAMESPACE
namespace Ui { class drum_widget; }
QT_END_NAMESPACE

class drum_widget : public QWidget
{
    Q_OBJECT

public:
    /// @brief This is the constructor for the class.
    /// @ details This constructor takes a number of qt parameters.
    /// @param QWidget *parent A pointer to the main parent.
    /// @param parent
    /// @param Ui A new Ui for the widget.
    drum_widget(QWidget *parent = nullptr);

    /// @brief This is the deconstructor for the drum widget class.
    /// @details This deconstructor will free memory from all dynamically allocated variables and instances of classes. This method is also used to destroy the ui.
    /// @author Kevin Yang
    ~drum_widget();

    /// @brief This method is used to return a pointer to the drum widget.
    /// @details Returns a QWidget pointer that points to the drum widget (esssentially the background window).
    /// @returns QWidget * drum_widget A QWidget pointer that points to the drum widget.
    /// @author Kevin Yang
    QWidget* returnDrumWidget();


private slots:

    /// @brief This method is used to handle the hihat push button slot.
    /// @details This method will handle when the hithat push button has been clicked by the user. It plays a sound and if recording is selected, it adds a text to the current item for the given hihat selection.
    /// @author Kevin Yang
    void on_pushButton_clicked();

    /// @brief This method is used to handle the crash cymbal push button slot.
    /// @details This method will play a sound file when the user has clicked on the crash cymbal push button and will add a text to the current item for crash cymbal.
    /// @author Kevin Yang
    void on_pushButton_3_clicked();

    /// @brief This method handles the snare push button slot.
    /// @details This method will play a sound file when the user has clicked on the snare push button and will add the text snare to the current item.
    /// @author Kevin Yang
    void on_pushButton_2_clicked();

    /// @brief This method handles the hi tom push button slot.
    /// @details This method will play a sound file when the user has clicked on the hi tom push button and will add the text hi tom to the current item.
    /// @author Kevin Yang
    void on_pushButton_6_clicked();

    /// @brief This method handles the medium tom button slot.
    /// @details This method will play a sound when the user has clicked on the medium tom push button. Text will be added to the current item if recording is on.
    /// @author Kevin Yang
    void on_pushButton_5_clicked();

    /// @brief This method handles the ride cymbal button slot.
    /// @details This method will play a sound when the user has clicked on the ride cymbal push button. Text will be added if recording is on.
    /// @author Kevin Yang
    void on_pushButton_4_clicked();

    /// @brief This method handles the floor tom button slot.
    /// @details This method will play a sound when the user has clicked on the floor tom push button. Text will be added if recording is on.
    /// @author Kevin Yang
    void on_pushButton_7_clicked();

    /// @brief This method handles the bass drum button slot.
    /// @details This method will play a sound when the user has clicked on the bass drum push button. If recording is on, text will be added to the current item.
    /// @author Kevin Yang
    void on_pushButton_8_clicked();

    /// @brief This method handles the toggle box for whether or not the hihat is toggled open or closed.
    /// @details This method accepts a boolean argument and sets the local variable to true/false accordingly if the user has selected to open or close the hi hat. This argument is automatically provided by the ui.
    /// @param bool checked Boolean argument for if the checkbox has been selected.
    /// @author Kevin Yang
    void on_checkBox_toggled(bool checked);

    /// @brief This method will handle whether or not the user wishes to record their interactions with the system.
    /// @details This method handles when the radio record button is clicked. If it is, the user wishes to record their interactions with the system. The text for the radio button is changed and two new qlistwidget items are created so that the history and recommendations can be built.
    /// @param bool checked Boolean argument provided by the UI that checks if the radio button has been toggled.
    /// @author Kevin Yang
    void on_radioButton_toggled(bool checked);

    /// @brief This will handle if the user wishes playback to be arpeggio.
    /// @details This method accepts a boolean argument that is provided by the UI that handles whether or not the arpeggio checkbox has been checked.
    /// @author Kevin Yang
    void on_checkBox_3_toggled(bool checked);

    /// @brief Handling if the user has clicked on a item from the history.
    /// @details This method accepts a QListWidget pointer that points to a selected item in the history. This argument is automatically provided by the UI when something is clicked. When clicked, the system will play the sounds in the corresponding history item.
    /// @param QListWidgetItem *item A QListWidgetItem that is provided by the UI when an item has been clicked in the history.
    /// @author Kevin Yang
    void on_listWidget_itemClicked(QListWidgetItem *item);

    /// @brief Handling if the history needs to be cleared.
    /// @details This method handles whether or not the clear history button has been clicked.
    /// @author Kevin Yang
    void on_pushButton_9_clicked();

    /// @brief This method is used to handle deleting individual items in the history QListWidget.
    /// @details This method will handle when a user wants to delete a selected item from the history.
    /// @author Kevin Yang
    void on_pushButton_11_clicked();

    /// @brief This is used for when the user wishes to play a recommendation.
    /// @details This method accepts a QListWidgetItem pointer that is provided by the system that points to the item that is selected by the user from the recommendations display. This method will parse the given item and play all the sounds from the recommendation.
    /// @param QListWidgetItem *item Argument provided by the system for when an item in the recommendations QListWidget has been clicked.
    /// @author Kevin Yang
    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    /// @brief This method clears all of the recommendations.
    /// @details This method handles when the clear recommendations button has been clicked. If it has been, all recommendations are deleted.
    /// @author Kevin Yang
    void on_pushButton_10_clicked();

    /// @brief This method handles if the user wishes to play all of the sounds from the recommendations QListWidget.
    /// @details This method handles if the user wishes to play all of the sounds from the recommendations display.
    /// @author Kevin Yang
    void on_pushButton_12_clicked();

    /// @brief This method handles if the user wishes to see what drum parts there are.
    /// @details This method handles when a button is pushed. It creates a new UI with an image of the parts of a drum.
    /// @author Kevin Yang
    void on_pushButton_13_clicked();

    /// @brief This method handles when the metronome slider has been moved.
    /// @details This method accepts an integer for the position of the slider provided by the UI. It sets the metronomes bpm to that position.
    /// @param int position For the position of the slider.
    /// @author Kohei Yasui
    void on_bpmSlider_sliderMoved(int position);

    /// @brief This method handles when the system should play a metronome tick.
    /// @details This method will play a tick using a static QSound object. This is used for playing metronome ticks.
    /// @author Kohei Yasui
    void playTick();

    /// @brief This method handles when the metronome push button is clicked.
    /// @details This method accepts a boolean argument that is provided by the UI, for when the metronome is selected to be played. This method handles when the metronome has been shut off.
    /// @param bool checked Boolean argument for when the button has been clicked.
    /// @author Kohei Yasui
    void on_metronomeButton_clicked(bool checked);

private:
    Ui::drum_widget *ui;

    bool openOrClosed; // Keeping track if the hi hat is closed or open.

    // We need a music player.
    QMediaPlayer *music;

    bool recording; // If the user has selected to record.

    QListWidgetItem *currentItem;

    bool arpeggio; // Handling if the user wants an arpeggio for playback.

    /// @brief This handles the dealy that the system requires for arpeggio playback.
    /// @details This method accepts an integer argument that determines how long the system will pause the UI each time. This is necessary for arpeggio playback.
    /// @param int msec An integer argument in milliseconds.
    /// @author Kohei Yasui
    void delay (int msec);

    QListWidgetItem *recItem;

    /// @brief This method is used to generate the recommendations and display in the listwidget.
    /// @details This method implements the drum backend. It will create a drum of 7 notes and grabs recommendations from the backend. This recommendation is in the form of an integer array that is parsed by this method. Each value is associated with a given part of the drum. At the end of the method, the recommendations are added to the recommendations list widget.
    /// @author Kevin Yang
    void createRecommendations();

    int metronomeBpm;

    bool init, isNew, deletion;
    QTimer *timer;

};
#endif // DRUM_WIDGET_H
