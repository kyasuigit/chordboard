/**
 * @file instrument_select.h
 * @brief Sets up a display window for the user to select a new instrument.
 *
 * Houses the widget that is displayed when the user wants to select a new instrument.
 * Has a dropdown with all of the other instruments available, and allows the user to select
 * one at will.
 *
 * @author Kohei Yasui (kyasui)
 * @bug No known bugs.
 * */

#ifndef INSTRUMENT_SELECT_H
#define INSTRUMENT_SELECT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class instrument_select; }
QT_END_NAMESPACE
/**
 * @brief The instrument_select class that houses the widget for going to another instrument.
 *
 * This class holds the UI object that implements the instrument change widget. If the user
 * wishes to switch to another instrument, this class is called, and emits the accepted signal
 * and string for instrument to MainWindow if they choose a new instrument.
 *
 * @author Kohei Yasui
 */
class instrument_select : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief instrument_select is the constructor that sets up the ui.
     *
     * Constructs the instrument selection dialog to the user that initializes all of the variables.
     *
     * @param parent set to null for QWidget
     */
    instrument_select(QWidget *parent = nullptr);

    /**
     * @brief returnSelection gets the instrument that is currently selected and returns it.
     *
     * Returns the instrument selected by the user through the dropdown. Only called if the
     * dialog is accepted by the user.
     *
     * @return QString for instrument name
     */
    QString returnSelection();

    /**
     * @brief insertInstr inserts a QString item that is an instrument name.
     *
     * Inserts into the combobox for the instrument dropdown. Called by MainWindow
     *
     * @param item the instrument name to be added.
     */
    void insertInstr(QString item);

    /**
     * @brief Deconstructor for instrument widget
     * */
    ~instrument_select();

private slots:
    /**
     * @brief on_confirmBox_accepted slot that houses when the confirm button is hit.
     *
     * When the confirm box is accepted, the accepted signal is emitted and the list is cleared again.
     */
    void on_confirmBox_accepted();

    /**
     * @brief on_confirmBox_rejected slot that houses when the cancel button is hit.
     *
     * When the cancel button is hit, rejected is emitted, and nothing is changed.
     */
    void on_confirmBox_rejected();

private:
    Ui::instrument_select *ui; // ui element
};
#endif // INSTRUMENT_SELECT_H
