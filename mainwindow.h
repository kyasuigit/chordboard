/**
 * @file mainwindow.h
 * @brief The MainWindow to display the widgets for the instruments.
 * Contains a help button, an exit, button, and a change instrument button
 * which calls an instrument_select object.
 *
 * @author Kohei Yasui (kyasui)
 * @bug No bugs found.
 * */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QComboBox>
#include <QPixmap>
#include "dialog.h"
#include "pianowidget.h"
#include "drum_widget.h"
#include "trumpet_widget.h"
#include "instrument_select.h"
#include "widget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow class
 *
 * Creates the main window element that houses
 * the instrument widgets to be displayed. Comes with
 * several buttons for application management and help.
 *
 * @author Kohei Yasui (kyasui)
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief constructor to initialize the mainwindow.
     *
     * Constructs the initial mainwindow to deploy the various
     * instrument widgets that are to be used in the application.
     * First calls a dialog box before showing this ui element to ask the user for
     * input.
     *
     * @param parent QWidget which is null.
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * Deconstructor
     * */
    ~MainWindow();

private:
    Ui::MainWindow *ui; // ui element
    QString instrType; // instrument string
    Dialog *dialog; // initial dialog box.
    instrument_select *selection; // select object

private slots:
    /**
     * @brief onAccept Displays the proper instrument UI element.
     *
     * Creates the Main Window for the user interface, adding several elements
     * to it for functionality. Based on the user's input from the dialog box, one of four
     * methods are called: setUpPiano, setUpDrum, setUpTrumpet, setUpFlute.
     */
    void onAccept();

    /**
     * @brief setUpPiano sets up the display for the piano widget.
     *
     * Deletes the current widget inside of the window and adds in a new one that displays
     * the piano widget.
     */
    void setUpPiano();

    /**
     * @brief setUpDrum sets up the display for the drum widget.
     *
     * Deletes the current widget inside of the window and adds in a new one that displays
     * the drum widget.
     */
    void setUpDrum();

    /**
     * @brief setUpTrumpet sets up the display for the trumpet widget.
     *
     * Deletes the current widget inside of the window and adds in a new one that displays the
     * trumpet widget.
     */
    void setUpTrumpet();

    /**
     * @brief setUpFlute sets up the display for the flute widget.
     *
     * Deletes the current widget insode of the window and adds in a new one that displays
     * the flute widget.
     */
    void setUpFlute();

    /**
     * @brief on_btnExit_clicked Executes a message box for the user confirming if they want to exit.
     *
     * If the user desires to exit the program, a messagebox is displayed confirming whether they want to continue
     * exiting or if they would like to cancel instead.
     */
    void on_btnExit_clicked();

    /**
     * @brief on_btnInstrument_clicked Executes a instrument_select object for instrument selection.
     *
     * If the user desires to switch instruments, an interface is opened from instrument_select that requires the user to input a new
     * instrument, or cancel to return. Then calls instrument_changed.
     */
    void on_btnInstrument_clicked();

    /**
     * @brief instrument_changed Calls upon one of four setup functions to display a new instrument.
     *
     * If the user selects a new instrument, one of four setup functions are called to display the new instrument widget.
     */
    void instrument_changed();

    /**
     * @brief on_helpButton_clicked Creates a message box to provide a help message.
     *
     * Provides a way to help the user understand the program if they have trouble understanding what to do.
     */
    void on_helpButton_clicked();

};
#endif // MAINWINDOW_H
