/**
 * @file pianowidget.h
 * @brief The widget for the piano instrument.
 *
 * This houses the widget for which the piano instrument is displayed.
 * Has several features that allows the user to freely play around with Piano Chords.
 *
 * @author Kohei Yasui (kyasui)
 * @bug Occasionally when output is clicked, one note only plays.
 * */

#ifndef PIANOWIDGET_H
#define PIANOWIDGET_H

#include <QWidget>
#include <QGroupBox>
#include <QPushButton>
#include <QSound>
#include <QSoundEffect>
#include <QPixmap>
#include <QDebug>
#include <QFile>
#include <QListWidgetItem>
#include <QListWidget>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QRandomGenerator>
#include <Chord.h>
#include <string.h>
#include "findChord.h"
#include "makeSong.h"


QT_BEGIN_NAMESPACE
namespace Ui { class pianowidget; }
QT_END_NAMESPACE
/**
 * @brief The pianowidget class
 *
 * This class creates the piano widget that is used by the application. Implements various features and uses
 * several backend classes such as findChord to properly display output
 *
 * @author Kohei Yasui (kyasui)
 */
class pianowidget : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief pianowidget initializes the variables used.
     * Creates many signal/slot connections used by the methods in the class. Sets up many of the initial
     * pointers like the timer for metronome.
     * @param parent set to null.
     */
    pianowidget(QWidget *parent = nullptr);

    /**
     * @brief deconstructor for the pianowidget class.
     *
     * Deletes all pointers used
     * */
    ~pianowidget();

    /**
     * @brief returnWidget returns the widget the piano is in.
     *
     * Returns the widget that houses the piano widget for use in the mainwindow.
     *
     * @returns the groupbox that is used to store the entire piano widget
     */
    QGroupBox *returnWidget();

private slots:

    /**
     * @brief on_metronomeButton_clicked Slot used when Metronome button is clicked.
     *
     * Slot for when the metronome button is clicked.
     *
     * @param checked boolean that checks if the metronome button is turned on.
     */
    void on_metronomeButton_clicked(bool checked);

    /**
     * @brief playNote Plays the note hit by the user.
     *
     * When a note on the piano is clicked, this slot is taken up and plays the note.
     *
     * Slot for when the user plays a note.
     */
    void playNote();

    /**
     * @brief on_octaveCombo_currentIndexChanged Slot for octave change.
     *
     * If the octave is changed on the combo box, then this slot is called to change
     * the instance variable that stores the current octave.
     *
     * @param arg1 QString for the index on the octave combo box.
     */
    void on_octaveCombo_currentIndexChanged(const QString &arg1);

    /**
     * @brief on_recordButton_toggled Slot for when the record button is toggled.
     *
     * If the record button is toggled, the QString storing the current combination of notes will start recording.
     *
     * @param checked true or false if the record button is toggled.
     */
    void on_recordButton_toggled(bool checked);

    /**
     * @brief on_stopButton_clicked Slot for when the stop button is clicked.
     * If the stop button is clicked, then the chord that is recorded is sent to the input list and displayed
     * to the user. It also calls the output function to display the output.
     */
    void on_stopButton_clicked();

    /**
     * @brief on_inputList_itemDoubleClicked Slot for when an item in the input list is double clicked.
     *
     * Called when an item on the input list is clicked. Calls the output function to display the output onto the output
     * list.
     *
     * @param item item on the input list.
     */
    void on_inputList_itemDoubleClicked(QListWidgetItem *item);

    /**
     * @brief playBack Slot for playing back the notes clicked.
     *
     * Takes the input of the note and plays it back according to the specifications selected by the user (arpeggio/staccato)
     *
     * @param note string that has all of the notes.
     */
    void playBack(QString note);

    /**
     * @brief on_clearButton_clicked Slot for when the clear button is clicked
     *
     * Clears the input list entirely of all contents.
     *
     */
    void on_clearButton_clicked();

    /**
     * @brief on_arpeggioCheck_stateChanged Slot for when arpeggio is checked.
     *
     * If clicked, the arpeggio boolean is set to true, and anything that is played back
     * is played with a delay between each note.
     *
     * @param arg1 int describing if the check box is clicked or not.
     */
    void on_arpeggioCheck_stateChanged(int arg1);

    /**
     * @brief on_dynamicCombo_currentIndexChanged Slot for when the dynamic is changed.
     *
     * If the dynamic is changed by the user, this slot is called, and the dynamic is changed.
     *
     * @param arg1 the contents of the index of the scale combo box.
     */
    void on_dynamicCombo_currentIndexChanged(const QString &arg1);

    /**
     * @brief on_removeButton_clicked Slot for when the remove button is clicked.
     *
     * If the remove button is clicked, then the highlighted item on the input list is removed from
     * the list.
     */
    void on_removeButton_clicked();

    /**
     * @brief on_checkStaccato_stateChanged Slot for when staccato is checked.
     *
     * If clicked, the staccato boolean is set to true, and anything that is played back
     * is played with a delay between each note and each note plays for a small amount of time.
     *
     * @param arg1 int describing if the check box is clicked or not.
     */

    void on_checkStaccato_stateChanged(int arg1);

    /**
     * @brief on_ambiguationCombo_currentIndexChanged Slot for the ambiguation combo index changing.
     *
     * If changed, the scale of the current chord will change. This is dependent on the user, and may have notes
     * that may not fit into the chord. If this is the case, it does not matter, as output will display notes outside of the
     * chosen major.
     *
     * @param arg1 index of the ambiguation
     */
    void on_ambiguationCombo_currentIndexChanged(const QString &arg1);

    /**
     * @brief on_scalePlayButton_clicked Slot for when the scale button is clicked.
     *
     * Plays the scale chosen in the combo box and displays a widget that shows what notes were played.
     */
    void on_scalePlayButton_clicked();

    /**
     * @brief on_outputList_itemDoubleClicked Slot for when an item is double clicked in output list.
     *
     * When an item is clicked on the output list, it plays back that chord and sets the current scale to
     * the respective scale of that chord.
     *
     * @param item item that is clicked on the output list
     */
    void on_outputList_itemDoubleClicked(QListWidgetItem *item);

    /**
     * @brief on_inputList_itemClicked Slot for input list single click.
     *
     * Calls double click for input list.
     * @param item chosen item.
     */
    void on_inputList_itemClicked(QListWidgetItem *item);

    /**
     * @brief on_outputList_itemClicked Slot for output list single click.
     *
     * Calls double click for output list.
     * @param item chosen item
     */
    void on_outputList_itemClicked(QListWidgetItem *item);

    /**
     * @brief on_bpmSlider_sliderMoved Slot for when the bpm slider is moved.
     *
     * If the slider is moved, the new bpm is set as the instance variable metronomeBpm.
     * @param position
     */
    void on_bpmSlider_sliderMoved(int position);

    /**
     * @brief playTick Plays a tick of the metronome.
     * This method plays a tick of the metronome when called.
     */
    void playTick();

    /**
     * @brief on_exampleSongWriter_clicked Slot for when the example song writer button is clicked.
     *
     * If hit, the backend makeSong class is called, and a song is randomly generated with the chosen output item.
     * This song is played back through the system.
     */
    void on_exampleSongWriter_clicked();

private:
    Ui::pianowidget *ui; // ui
    QString octave, scale, inputScale, outputScale; // strings for octave, scale, scale for input, and scale for output
    bool record, alreadyRecorded, arpeggio, staccato, chordPlay, pedal, deletion, isNew, init;
    int metronomeBpm; // stores the bpm for metronome
    Chord currentChord;
    QString dynamic;
    /**
     * @brief delay Function to delay the widget.
     *
     * Function that will delay the playback by milliseconds to play arpeggio or staccato.
     *
     * @param msec ms time for delay.
     */
    void delay(int msec);

    /**
     * @brief output Method to create the output on the output list.
     *
     * Creates the recommended chords for the user input into the output list. Uses backend class
     * findChord.
     *
     * @param input QString of all notes
     */
    void output(QString input);

    /**
     * @brief createList Creates the list of the output when a new input is selected.
     * @param input Chord object in the input list.
     */
    void createList(Chord input);
    QTimer *timer; // timer

};
#endif // PIANOWIDGET_H
