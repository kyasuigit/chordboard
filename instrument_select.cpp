#include "instrument_select.h"
#include "ui_instrument_select.h"

instrument_select::instrument_select(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::instrument_select)
{
    ui->setupUi(this);
}

QString instrument_select::returnSelection()
{
    return ui->instrumentCombo->currentText();
}

instrument_select::~instrument_select()
{
    delete ui;
}


void instrument_select::on_confirmBox_accepted()
{
    emit accepted();
    this->accept();
}


void instrument_select::on_confirmBox_rejected()
{
    emit rejected();
    this->reject();
}

