/** @file dialog.cpp
 *  @brief User instrument selection UI implementation.
 *
 *  @author Kohei Yasui
 *  @bug No known bugs.
 * */

#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog) // initializes Qt UI
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Welcome!")); // sets the Window title for the dialog.
}

Dialog::~Dialog()
{
    delete ui; // once finished, this dialog is never called again.
}


void Dialog::on_goButton_clicked()
{
    this->instr = ui->instrumentCombo->currentText(); // sets the instrument type to instr when the user hits go.
    emit accepted();
    this->accept();
}

QString Dialog::getInstr()
{
    return this->instr; // returns the instrument type.
}

