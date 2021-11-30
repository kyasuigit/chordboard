#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSound>
#include <QListWidgetItem>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QTime>
#include "makeSong.h"
#include "findChord.h"
#include <QFileInfo>
#include <QMessageBox>
#include <QTimer>

/// @file widget.h
/// @brief This class is used to create and maintain a flute ui. It contains all the methods
/// necessary to allow the user to play flute sounds, record flute notes, and maintain a histroy of flute notes.
/// This class also implements the flute backend so the flute ui is able to display song recommendations given the note input.
/// @authors Kevin Yang, Kohei Yasui

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:

    /// @brief This is the constructor for the flute class. It accepts a number of QT arguments to create the UI.
    /// @details This constructor is used to generate the UI.
    /// @param QWidget *parent A pointer to the parent QWidget for the UI.
    /// @param parent
    /// @param Ui A new ui widget element.
    /// @author Kevin Yang
    Widget(QWidget *parent = nullptr);

    /// @brief This is the deconstructor of the class.
    /// @details This decontructor will delete the UI and all dynamically allocated items in the class.
    /// @author Kevin Yang
    ~Widget();

    /// @brief Method to return a pointer to the flute widget.
    /// @details This method returns a pointer to the ui flute widget.
    /// @author Kohei Yasui
    QWidget *returnFluteWidget();

private slots:

    /// @brief This method will handle if a specific item has been clicked in the note selection widget.
    /// @details This method accepts a QListWidget pointer item that points to a selected item from the note list widget. This method will play the sound of the note and add the note
    /// to the history item if recording has been selected.
    /// @param QListWidget *item Pointer to the item that is selected from the QListWidget.
    /// @author Kevin Yang
    void on_listWidget_itemClicked(QListWidgetItem *item);

    /// @brief This method handles when the user has selected an octave from the dropdown.
    /// @details This method accepts an integer for the index from the combobox that is provided by the system. This method will set the octave selected and will call a corresponding method called createList
    /// that will create a list of notes in the given octave.
    /// @param int index A UI provided integer for the index of the item selected from the combobox.
    /// @author Kevin Yang
    void on_comboBox_activated(int index);

    /// @brief This method will handle if the user wishes to record their interaction with the system.
    /// @details This method accepts a boolean argument from the UI for when the record button has been toggled. This method will create the necessary items for
    /// recording the users selections.
    /// @param bool checked A boolean argument that is provided by the system when the record button has been toggled.
    /// @author Kevin Yang
    void on_radioButton_toggled(bool checked);

    /// @brief This method handles clearing the history.
    /// @details This method handles when the user has selected to clear the entire history list.
    /// @author Kevin Yang
    void on_pushButton_2_clicked();

    /// @brief This method handles when the user selects the arpeggio.
    /// @details This is the slot handler for when the user has selected to play in arpeggio. It accepts a boolean from the UI for whether or not the checkbox has been toggled.
    /// @param bool checked A boolean argument for if the checkbox is toggled.
    /// @author Kevin Yang
    void on_checkBox_toggled(bool checked);

    /// @brief This method handles if the user has clicked on an item in the history.
    /// @details This method accepts a QListWidgetItem pointer to an item from the history QListWidget. This item is used to determine which item the user has selected. the method uses this to
    /// play the corresponding note.
    /// @param QListWidgetItem *item An argument provided by the system that points at a selected item on the history view.
    /// @author Kevin Yang
    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    /// @brief This method handles when the user wishes to delete a single item from the history.
    /// @details This method handles the slot when the user has pressed the delete button. This will remove all selected items from the history.
    /// @author Kevin Yang
    void on_pushButton_clicked();

    /// @brief This method handles if the user has selected a major or minor chord song recommendation.
    /// @details This method accepts an integer index from the system for the index of selection from the combobox. This index will be used to determine if the user has selected minor or major song creation.
    /// @param int index An integer provided from the system for the status of the combobox.
    /// @author Kevin Yang
    void on_comboBox_2_activated(int index);

    /// @brief This method handles if the user wishes to generate a new song recommendation.
    /// @details This method will grab all the selected items from the history view, and for each of the notes in these selections, calls the backend makeSong method to generate a song of the given length
    /// for minor or majors. This method then displays these recommendations in the QListWidget for recommendations.
    /// @author Kevin Yang
    void on_pushButton_4_clicked();

    /// @brief This method handles the toggle for how long the user wishes the song to be.
    /// @details This method takes in an integer argument from the spinbox that contains how long the song has to be.
    /// @param int arg1 An integer argument passed from the system that contains the status of the spinbox.
    /// @author Kevin Yang
    void on_spinBox_valueChanged(int arg1);

    /// @brief This method handles if the user has clicked on one of the recommendation items.
    /// @details This method accepts a QListWidgetItem pointer that points to a selected item from the recommendations view. This item is used by the method to play all the notes
    /// from the given selection.
    /// @param QListWidgetItem *item A pointer provided by the UI that points to the item from the recommendations view.
    /// @author Kevin Yang
    void on_listWidget_3_itemClicked(QListWidgetItem *item);

    /// @brief The method handles if the user wishes to play all the sounds in the recommendation list to form a sample song.
    /// @details This method handles when the user pushes the play button that will play all the sounds in the recommendation list. This will play a song with the items.
    /// @author Kevin Yang
    void on_pushButton_5_clicked();

    /// @brief This method handles if the recommendations list needs to be cleared.
    /// @details This method handles the slot for the button that clears the entire recommendations list.
    /// @author Kevin Yang
    void on_pushButton_3_clicked();

    /// @brief This method displays a new window with an image of the flute fingerings.
    /// @details This method creates a QMessageBox that displays an image of the flute fingerings if the user pushes the help button.
    /// @author Kevin Yang
    void on_pushButton_6_clicked();

    /// @brief This method handles when the metronome button is pressed.
    /// @details This method accepts a boolean argument from the system that handles whether or not the metronome button has been toggled.
    /// @param bool checked Boolean argument for whether or not the button has been toggled
    /// @author Kohei Yasui
    void on_metronomeButton_toggled(bool checked);

    /// @brief This method is used to determine the bpm of the metronome.
    /// @details This method determines the bpm of the metronome by handling the position of the bpm slider. This method accepts an integer from the system for the position of the slider.
    /// @param int position An integer for the position of the slider.
    /// @author Kohei Yasui
    void on_bpmSlider_sliderMoved(int position);

    /// @brief This method is used to play a tick for the metronome.
    /// @details This method plays a tick sound file at the given bpm selected.
    /// @author Kohei Yasui
    void playTick();

private:
    Ui::Widget *ui;

    // We need a variable to handle the recording token being pressed.
    bool recording;

    // For storing the octave desired by the user.
    int octave;

    /// @brief This method will create the note view for the given octave.
    /// @details This method accepts an integer for the octave selected by the user. The method will generate a vector of strings for the notes and populate the QListWidget with the notes.
    /// @param int octave Integer argument for the octave selected by the user.
    /// @author Kevin Yang
    void createList (int octave);

    QListWidgetItem *currentItem; // Current item.

    // Booleans for metronome creation.
    bool arpeggio, deletion, isNew, init;

    /// @brief This method handles the dealy that the system requires for arpeggio playback.
    /// @details This method accepts an integer argument that specifies how long the delay should be.
    /// @param int msec Integer argument for the delay in milliseconds.
    /// @author Kohei Yasui
    void delay (int msec);

    std::string minorOrMajor; // String to handle minor or major.

    QTimer *timer;

    int sizeOfSong, metronomeBpm; // Integer for size of the song desired and metronome bpm.
};
#endif // WIDGET_H
