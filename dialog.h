/**
 *@file dialog.h
 *@brief Dialog for welcome message and initial instrument selection.
 *This contains the class and method of the dialog box used to communicate
 *with the user initially.
 *@author Kohei Yasui (kyasui)
 *@bug No known bugs.
 *
 */

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

/**
 * @brief The Dialog class to instantiate the user's choice of interface
 *
 * This class is designed to create the UI element that houses the user's initial choice
 * of instrument. It creates a small UI that houses a ComboBox to let the user choose the
 * instrument they wish to start with.
 *
 * @author Kohei Yasui
 */

class Dialog : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Sets up the UI element.
     * @param parent indicates the parent widget that the Dialog uses, which is null.
     */
    Dialog(QWidget *parent = nullptr);

    ~Dialog();

    /**
     * @brief When called, returns the instrument the user selected.
     * @return QString for the instrument name.
     */
    QString getInstr();

private slots:
    /** Slot for the user clicking the go button.
     * @brief Sets up the signal that is sent out to MainWindow if the user hits go.
     */
    void on_goButton_clicked();

private:
    Ui::Dialog *ui; // Qt ui element for the dialog
    QString instr; // QString for the instrument name.
};
#endif // DIALOG_H
