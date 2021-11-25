#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
const std::string instruments[] = {"Piano", "Flute", "Harpsichord", "Drum"};

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

}

void MainWindow::onAccept()
{
    this->instrType = dialog->getInstr();

    QRect screenGeom = QApplication::desktop()->screenGeometry();
    int x = (screenGeom.width()-this->width()) /2;
    int y = (screenGeom.height()-this->width()) /2;
    this->move(x, y);
    this->setWindowTitle(QString(QString("ChordBoard: ") + this->instrType));

    if (this->instrType.toStdString() == "Piano")
        this->setUpPiano();

    this->show();
}

void MainWindow::setUpPiano()
{
    pianowidget *piano = new pianowidget();
    QVBoxLayout *layout = new QVBoxLayout(ui->interfaceWidget);

    layout->addWidget(piano->returnWidget());
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
    selection->show();
    connect(selection, &instrument_select::accepted, this, &MainWindow::instrument_changed);
}

void MainWindow::instrument_changed()
{
    QString newInstr = selection->returnSelection();
    ui->interfaceWidget->hide();
}

