/**
 * @file instrument_select.cpp
 * @brief Instrument select implementation
 *
 * Implementation for the instrument select ui that is displayed whenever the user
 * hits the "Change Instrument" button. A dropdown is available which displays the instruments not
 * being used at the moment, and changes the widget to a new one.
 *
 * @author Kohei Yasui (kyasui)
 * @bug No known bug.
 * */

#include "instrument_select.h"
#include "ui_instrument_select.h"

instrument_select::instrument_select(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::instrument_select)
{
    ui->setupUi(this); // sets up ui
}

QString instrument_select::returnSelection()
{
    return ui->instrumentCombo->currentText(); // returns the instrument selected
}

void instrument_select::insertInstr(QString item)
{
    ui->instrumentCombo->addItem(item); // adds an instrument called item
}

instrument_select::~instrument_select()
{
    delete ui; // deconstructor
}


void instrument_select::on_confirmBox_accepted()
{
    emit accepted(); // emits accepted
    this->accept();
    ui->instrumentCombo->clear(); // clears the list
}


void instrument_select::on_confirmBox_rejected()
{
    emit rejected();// emits rejected
    this->reject();
    ui->instrumentCombo->clear(); // clears the list
}

