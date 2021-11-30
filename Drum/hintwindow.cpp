#include "hintwindow.h"
#include "ui_hintwindow.h"

hintWindow::hintWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hintWindow)
{
    ui->setupUi(this);
}

hintWindow::~hintWindow()
{
    delete ui;
}
