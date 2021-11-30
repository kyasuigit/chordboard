#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
const std::string instruments[] = {"Piano", "Flute", "Trumpet", "Drums"};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dialog = new Dialog();
    QObject::connect(dialog, &Dialog::accepted, this, &MainWindow::onAccept);
    dialog->show();
    selection = new instrument_select();
    selection->setWindowTitle("Instrument Selection");
    replace = false;

}

void MainWindow::onAccept()
{
    this->instrType = dialog->getInstr();

    QRect screenGeom = QApplication::desktop()->screenGeometry();
    int x = (screenGeom.width()-this->width()) /2;
    int y = (screenGeom.height()-this->width()) /2;
    this->move(x, y);
    this->setWindowTitle(QString(QString("ChordBoard - ") + this->instrType));

    if (this->instrType.toStdString() == "Piano")
        this->setUpPiano();
    else if (this->instrType.toStdString() == "Drums")
        this->setUpDrum();
    else if (this->instrType.toStdString() == "Trumpet")
        this->setUpTrumpet();

    this->show();
}

void MainWindow::setUpPiano()
{
    if (ui->interfaceWidget->layout() != NULL) {
        QLayoutItem* item;
        while ((item = ui->interfaceWidget->layout()->takeAt( 0 )) != NULL)
        {
            delete item->widget();
            delete item;
        }
        delete ui->interfaceWidget->layout();
    }
    this->setWindowTitle(QString(QString("ChordBoard - ") + this->instrType));

    pianowidget *piano = new pianowidget();
    QLayout *layout =  new QVBoxLayout(ui->interfaceWidget);

    layout->addWidget(piano->returnWidget());

}

void MainWindow::setUpDrum()
{
    if (ui->interfaceWidget->layout() != NULL) {
        QLayoutItem* item;
        while ((item = ui->interfaceWidget->layout()->takeAt( 0 )) != NULL)
        {
            delete item->widget();
            delete item;
        }
        delete ui->interfaceWidget->layout();
    }
    this->setWindowTitle(QString(QString("ChordBoard - ") + this->instrType));

    drum_widget *drum = new drum_widget();
    QLayout *layout_2 =  new QVBoxLayout(ui->interfaceWidget);

    layout_2->addWidget(drum->returnDrumWidget());

}

void MainWindow::setUpTrumpet()
{
    if (ui->interfaceWidget->layout() != NULL) {
        QLayoutItem* item;
        while ((item = ui->interfaceWidget->layout()->takeAt( 0 )) != NULL)
        {
            delete item->widget();
            delete item;
        }
        delete ui->interfaceWidget->layout();
    }

    this->setWindowTitle(QString(QString("ChordBoard - ") + this->instrType));

    trumpet_widget *trumpet = new trumpet_widget();
    QLayout *layout_3 =  new QVBoxLayout(ui->interfaceWidget);

    layout_3->addWidget(trumpet->returnWidget());

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnExit_clicked()
{
    int response = QMessageBox::warning(this, tr("Exit"), tr("Are you sure you want to exit?"), QMessageBox::Yes | QMessageBox::No);

    switch (response) {
        case QMessageBox::Yes:
            this->close();
            break;
        case QMessageBox::No:
            break;
    }
}

void MainWindow::on_btnInstrument_clicked()
{
    for (int i = 0; i < 4; i++) {
        std::string name = instruments[i];
        if (this->instrType.toStdString() != name) {
            selection->insertInstr(QString::fromStdString(name));
        }
    }
    selection->show();
    connect(selection, &instrument_select::accepted, this, &MainWindow::instrument_changed);
}

void MainWindow::instrument_changed()
{
    replace = true;
    QString newInstr = selection->returnSelection();
    this->instrType = newInstr;

    if (newInstr == "Piano")
        this->setUpPiano();
    else if (newInstr == "Drums")
        this->setUpDrum();
    else if (newInstr == "Trumpet")
        this->setUpTrumpet();
}

void MainWindow::on_helpButton_clicked()
{
    QMessageBox::information(this, tr("Help"), tr("To use this application, please press the record button, then input a set of notes, and stop recording. You can click the output on the bottom to see the chords suggested, and play a sample song from that selection."), QMessageBox::Ok);
}

