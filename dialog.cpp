#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Welcome!"));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_goButton_clicked()
{
    this->instr = ui->instrumentCombo->currentText();
    emit accepted();
    this->accept();
}

QString Dialog::getInstr()
{
    return this->instr;
}

