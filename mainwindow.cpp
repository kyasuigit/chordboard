/**
 * @file mainwindow.cpp
 * @brief Provides the implementation for the main window UI that the user interacts with.
 *
 * This class provides the implementation of the UI that the user interacts with for the rest
 * of the program. It allows for easy switching to one of four instrument widgets, and provides
 * help and exit functions that the user can use at will.
 *
 * @author Kohei Yasui (kyasui)
 * @bug No known bugs.
 * */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
const std::string instruments[] = {"Piano", "Flute", "Trumpet", "Drums"}; // a constant array to store the strings for the instruments.

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); // ui set up

    dialog = new Dialog(); // create a dialog
    QObject::connect(dialog, &Dialog::accepted, this, &MainWindow::onAccept); // if the user accepts, go to onAccept and create the window.
    dialog->show();

    selection = new instrument_select(); // sets up the window that the user will use to change between instruments/
    selection->setWindowTitle("Instrument Selection");

    connect(selection, &instrument_select::accepted, this, &MainWindow::instrument_changed); // connects the signal for accepting to the instrument changed function
}

void MainWindow::onAccept()
{
    this->instrType = dialog->getInstr();

    QRect screenGeom = QApplication::desktop()->screenGeometry(); // sets it so that mainwindow appears in the middle of the screen.
    int x = (screenGeom.width()-this->width()) /2;
    int y = (screenGeom.height()-this->width()) /2;
    this->move(x, y);
    this->setWindowTitle(QString(QString("ChordBoard - ") + this->instrType)); // sets the title based upon which instrument the user selects.

    if (this->instrType.toStdString() == "Piano") // calls the setup functions based on what instrument is chosen
        this->setUpPiano();
    else if (this->instrType.toStdString() == "Drums")
        this->setUpDrum();
    else if (this->instrType.toStdString() == "Trumpet")
        this->setUpTrumpet();
    else if (this->instrType.toStdString() == "Flute")
        this->setUpFlute();

    this->show();
}

void MainWindow::setUpPiano()
{
    if (ui->interfaceWidget->layout() != NULL) { // deletes all widgets inside of the QWidget box called interfaceWidget that houses the instrument ui.
        QLayoutItem* item;
        while ((item = ui->interfaceWidget->layout()->takeAt( 0 )) != NULL)
        {
            delete item->widget();
            delete item;
        }
        delete ui->interfaceWidget->layout();
    }
    this->setWindowTitle(QString(QString("ChordBoard - ") + this->instrType));

    pianowidget *piano = new pianowidget(); // creates a  piano widget and sets it as the layout for the QWidget box
    QLayout *layout =  new QVBoxLayout(ui->interfaceWidget);

    layout->addWidget(piano->returnWidget()); // adds the widget to the layout

}

void MainWindow::setUpDrum()
{
    if (ui->interfaceWidget->layout() != NULL) { // deletes all widgets inside of the QWidget box called interfaceWidget that houses the instrument ui.
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
    QLayout *layout_2 =  new QVBoxLayout(ui->interfaceWidget);// creates a drum widget and sets it as the layout for the QWidget box

    layout_2->addWidget(drum->returnDrumWidget());// adds the widget to the layout

}

void MainWindow::setUpTrumpet()
{
    if (ui->interfaceWidget->layout() != NULL) { // deletes all widgets inside of the QWidget box called interfaceWidget that houses the instrument ui.
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
    QLayout *layout_3 =  new QVBoxLayout(ui->interfaceWidget); // creates a trumpet widget and sets it as the layout.

    layout_3->addWidget(trumpet->returnWidget());// adds the widget to the layout

}

void MainWindow::setUpFlute()
{
    if (ui->interfaceWidget->layout() != NULL) { // deletes all widgets inside of the QWidget box called interfaceWidget that houses the instrument ui.
        QLayoutItem* item;
        while ((item = ui->interfaceWidget->layout()->takeAt( 0 )) != NULL)
        {
            delete item->widget();
            delete item;
        }
        delete ui->interfaceWidget->layout();
    }

    this->setWindowTitle(QString(QString("ChordBoard - ") + this->instrType));

    Widget *flute = new Widget(); // creates a flute widget and sets it as the layout
    QLayout *layout_4 =  new QVBoxLayout(ui->interfaceWidget);

    layout_4->addWidget(flute->returnFluteWidget());// adds the widget to the layout
}


MainWindow::~MainWindow()
{
    delete ui;
    delete dialog;
    delete selection; // deletes all used pointers.
}
void MainWindow::on_btnExit_clicked()
{
    int response = QMessageBox::warning(this, tr("Exit"), tr("Are you sure you want to exit?"), QMessageBox::Yes | QMessageBox::No); // creates a messagebox that asks the user to confirm if they want to quit

    switch (response) {
        case QMessageBox::Yes:
            this->close(); // if the user closes, then the app closes.
            break;
        case QMessageBox::No:
            break;
    }
}

void MainWindow::on_btnInstrument_clicked()
{
    for (int i = 0; i < 4; i++) { // checks for what instrument is currently displayed, and displays the three others.
        std::string name = instruments[i];
        if (this->instrType.toStdString() != name) {
            selection->insertInstr(QString::fromStdString(name));
        }
    }
    selection->show();
}

void MainWindow::instrument_changed()
{
    QString newInstr = selection->returnSelection(); // gets the selection.
    this->instrType = newInstr;

    if (newInstr == "Piano") // sets up the new instrument
        this->setUpPiano();
    else if (newInstr == "Drums")
        this->setUpDrum();
    else if (newInstr == "Trumpet")
        this->setUpTrumpet();
    else if (newInstr == "Flute")
        this->setUpFlute();
}

void MainWindow::on_helpButton_clicked()
{
    if (instrType == "Piano") // creates a help message box based on the current instrument.
       QMessageBox::information(this, tr("Help"), tr("To use this piano application, please press the record button, then input a set of notes, and stop recording. You can click the output on the bottom to see the chords suggested, and play a sample song from that selection."), QMessageBox::Ok);
    else if (instrType == "Drums")
       QMessageBox::information(this, tr("Help"), tr("To use this drum application, please press the record button, input a set of hits on the drum, then hit record again. You will be met with a list of hits that can be played synchronously, or one by one."), QMessageBox::Ok);
    else if (instrType == "Flute")
       QMessageBox::information(this, tr("Help"), tr("To use this flute application, please select an octave from the dropdown labeled 'OCTAVE'. You will be presented a list of notes in the given octave. Select record to begin recording your interaction with the system. Select an item from the history and press 'Find Song' to generate a song of the given length."), QMessageBox::Ok);
    else if (instrType == "Trumpet")
       QMessageBox::information(this, tr("Help"), tr("To use this trumpet application, please set a combination of valve inputs above the trumpet and hit play. If recorded, the input is displayed and the recommendations are shown in the output list."), QMessageBox::Ok);
}

