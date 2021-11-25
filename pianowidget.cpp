#include "pianowidget.h"
#include "ui_pianowidget.h"

pianowidget::pianowidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pianowidget)
{
    ui->setupUi(this);
}

pianowidget::~pianowidget()
{
    delete ui;
}

QGroupBox* pianowidget::returnWidget()
{
    return ui->pianoInterfaceBox;
}


void pianowidget::on_metronomeButton_clicked(bool checked)
{
    if (checked)
        ui->metronomeButton->setText("On");
    else
        ui->metronomeButton->setText("Off");
}

