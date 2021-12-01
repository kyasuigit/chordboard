/**
 * @file trumpet_widget.h
 * @brief Trumpet widget class to display the trumpet application to the user.
 *
 * This houses the widget for which the trumpet instrument is displayed.
 * Has several features that allows the user to freely play around with Trumpet chords.
 *
 * @author Kohei Yasui (kyasui)
 * @bug Some output only plays one note, missing some F# notes.
 * */

#ifndef TRUMPET_WIDGET_H
#define TRUMPET_WIDGET_H

#include <QWidget>
#include <QFile>
#include <QSound>
#include <QTextStream>
#include <QDebug>
#include <QSoundEffect>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QListWidget>
#include <QTime>
#include <QTimer>
#include <QKeyEvent>
#include "Chord.h"
#include "findChord.h"

QT_BEGIN_NAMESPACE
namespace Ui { class trumpet_widget; }
QT_END_NAMESPACE
/**
 * @brief The trumpet_widget class Implements the trumpet instrument through a QWidget.
 *
 * This class provides the implementation of the trumpet instrument through a QWidget class. Using
 * a set of Qt CheckBox objects, the user can play a set of notes through the trumpet with ease, record it,
 * and receive feedback based on which notes harmonize. This in essence creates a system where, if you input a chord
 * for the trumpet, you will receive feedback of other chords that other trumpet players could play along side and harmonize with,
 * almost like a band.
 *
 * @author Kohei Yasui (kyasui), John Franklin Dick (jdick32)
 */
class trumpet_widget : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief trumpet_widget Constructor to initialize variables for use in the class.
     *
     * Initializes all essential variables used in the program, and sets little details such as graphics.
     *
     * @param parent Null QWidget pointer.
     */
    trumpet_widget(QWidget *parent = nullptr);

    /**
     * @brief Deconstructor for the trumpet_widget class
     * */
    ~trumpet_widget();

    /**
     * @brief returnWidget Returns the widget for use in MainWindow
     *
     * This simple method returns the GroupBox that contains the trumpet widget.
     *
     * @return QWidget pointer for the trumpet widget.
     */
    QWidget* returnWidget();

private slots:
    /**
     * @brief on_valve1_stateChanged This slot is used to handle when the value of the first piston valve of the trumpet is changed.
     *
     * This slot handles when the first slot is changed. It accepts an integer for this change.
     *
     * @param arg1 Int for change in the first valve.
     */
    void on_valve1_stateChanged(int arg1);

    /**
     * @brief on_valve2_stateChanged This slot is used to handle when the value of the second piston valve of the trumpet is changed.
     *
     * This simple slot handles when the second slot is changed. It accepts an integer for this change.
     *
     * @param arg1 Int for the second valve.
     */
    void on_valve2_stateChanged(int arg1);

    /**
     * @brief on_valve3_stateChanged This slot is used to handle when the value of the final piston valve of the trumpet is changed.
     *
     * This simple slot handles when the final slot is changed. It accepts and integer for this change.
     *
     * @param arg1 Int for the third slot
     */
    void on_valve3_stateChanged(int arg1);

    /**
     * @brief on_playButton_clicked This slot is used to handle when the play button is clicked.
     *
     * When the play button is clicked, the trumpet plays the selected note using the partial and the valves that the
     * user has selected.
     */
    void on_playButton_clicked();

    /**
     * @brief on_checkBox_stateChanged Check box for arpeggio
     *
     * If checked, the arpeggio boolean is set to true.
     *
     * @param arg1 2 or 0 for checked
     */
    void on_checkBox_stateChanged(int arg1);

    /**
     * @brief on_recordButton_toggled Slot for when the record button is toggled
     *
     * If toggled, the ui will start recording the notes that the user inputs into the system.
     * @param checked true or false if checked.
     */
    void on_recordButton_toggled(bool checked);

    /**
     * @brief on_partialCombo_currentIndexChanged Slot for when the partial is changed
     *
     * If the partial is changed, the int value for the partial is altered to create a corresponding note.
     *
     * @param index index of partial
     */
    void on_partialCombo_currentIndexChanged(int index);

    /**
     * @brief on_stopButton_clicked Slot for when the stop button is clicked.
     *
     * When the stop button is clicked, the program will put the recorded chord
     * into the input list, and display the output from the backend onto the output
     * list.
     */
    void on_stopButton_clicked();

    /**
     * @brief on_clearButton_clicked Slot for when the clear button is clicked.
     *
     * Clears the input and output list.
     */
    void on_clearButton_clicked();

    /**
     * @brief on_removeButton_clicked Slot for remove button clicked.
     *
     * If clicked, the input list item highlighted will be removed from the input list.
     */
    void on_removeButton_clicked();

    /**
     * @brief on_inputList_itemClicked Slot for when an input list item is clicked.
     *
     * If the input list item is clicked, the chord is played, and the corresponding
     * output is displayed onto the output list.
     *
     * @param item the item clicked in the list
     */
    void on_inputList_itemClicked(QListWidgetItem *item);

    /**
     * @brief delay Delay the system.
     *
     * If called, the system will be delayed based on the amount of msecs given.
     * @param msecs milliseconds to delay.
     */
    void delay(int msecs);

    /**
     * @brief on_metronome_toggled Slot for when metronome is toggled.
     *
     * If toggled, the system will turn the metronome on, given the BPM is set.
     * @param checked true if toggled
     */
    void on_metronome_toggled(bool checked);

    /**
     * @brief on_sliderBpm_sliderMoved Slot for when the slider is moved.
     *
     * If moved, the BPM is updated in metronomeBpm to the position of the slider.
     * @param position the bpm
     */
    void on_sliderBpm_sliderMoved(int position);

    /**
     * @brief on_inputHelpButton_clicked Slot for the input help button
     *
     * If pushed, the ui will open an interface to show the help image of how
     * the user can input notes on the trumpet.
     */
    void on_inputHelpButton_clicked();

    /**
     * @brief on_scaleCombo_currentIndexChanged Slot for the scale combo change.
     *
     * If the scale combo is changed, the value of the scale will be changed.
     * @param arg1 scale qstring
     */
    void on_scaleCombo_currentIndexChanged(const QString &arg1);

    /**
     * @brief on_outputList_itemClicked Slot for when an output list item is clicked
     *
     * The output will play the chord when clicked.
     * @param item the item clicked.
     */
    void on_outputList_itemClicked(QListWidgetItem *item);

private:
    Ui::trumpet_widget *ui; // ui element
    int valveOne, valveTwo, valveThree, partial; // int values for input
    bool arpeggio, recordOn, isNew, init, deletion;
    QFile file; // file for QFile
    QString currentComb, scale, inputScale;

    QTimer *timer; // timer
    int metronomeBpm;
    /**
     * @brief playTick Tick player for metronome
     * Plays a tick of the metronome.
     */
    void playTick();
    /**
     * @brief displayOutput Function that displays the output of the input chord.
     *
     * The output that the user wants will be displayed through this function. The input item
     * must be highlighted for this to work.
     *
     * @param notes the notes selected in the input list.
     */
    void displayOutput(QString notes);

};
#endif // TRUMPET_WIDGET_H
