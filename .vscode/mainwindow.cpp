/** Kohei Yasui
 *  MainWindow Class to Create an Interface for the User to Use. The history must be double-clicked.
 *  10/03/2021
 **/

#include "mainwindow.h"
#include "command.h"
#include <iostream>
#include <string.h>

/**
 * This is the MainWindow class, a child of the QMainWindow class, that creates the user interface. It uses a QWidget as a parameter to create a UI back to the main class. 
 * */
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	this->resize(400, 600); // resize the GUI and add a title
	this->setWindowTitle("Command GUI");

	m_button = new QPushButton("Execute", this); // create the execute button
	m_button->setGeometry(QRect(QPoint(300, 17), QSize(80, 23)));

	commandLabel = new QLabel(tr("Command:"), this); // labels for both command and output
	commandLabel->setGeometry(QRect(QPoint(20, 17), QSize(80, 23)));

	outputLabel = new QLabel(tr("Output:"), this);
	outputLabel->setGeometry(QRect(QPoint(20, 17), QSize(80, 86)));

	commandLine = new QLineEdit("", this); // creates the editable line interface for the command input by the user. 
	commandLine->setGeometry(QRect(QPoint(90, 17), QSize(200, 23)));

	outputText = new QTextEdit("", this); // creates the editable text interface for the output
	outputText->setReadOnly(true);
	outputText->setGeometry(QRect(QPoint(20, 80), QSize(360, 220)));

	returnLabel = new QLabel(tr("Exit Status: "), this); //creates the labels for the Exit Status and history
	returnLabel->setGeometry(QRect(QPoint(20, 300), QSize(100, 23)));

	historyLabel = new QLabel(tr("History (double-click to show): "), this);
	historyLabel->setGeometry(QRect(QPoint(20, 330), QSize(200, 23)));

	historyList = new QListWidget(this); // creates a List Widget for the history of the output by the system. 
	historyList->setGeometry(QRect(QPoint(20, 360), QSize(360, 220)));

	cmdCount = 1;
	std::vector<Command> listOfItems; // vector of items

	connect(m_button, &QPushButton::released, this, &MainWindow::handleButton); // connects both the user hitting the execute button and the user clicking an item in the history to respective functions. 
	connect(historyList, &QListWidget::itemDoubleClicked, this, &MainWindow::showClickedItem);
}

/**
 * This method handles the user hitting the Execute button. 
 * */
void MainWindow::handleButton()
{
	Command newCommand(commandLine->text().toStdString()); // create a new Command object with the text found in the interface. 
	
	newCommand.execute(); // executes the command object
	QString resultQStr = QString::fromStdString(newCommand.getResult()); // gets a QString object from the result of the Command class. 
	outputText->setText(resultQStr); // changes the text of the output box to the result given earlier. 

	this->setReturnCode(newCommand.getReturnCode());
	listOfItems.push_back(newCommand); // add the command to the back of the list. 
	this->insertIntoHistory(); 
}

/**
 * This method sets the return code to a new value given by the parameter. This parameter is either 0 or -1. 
 * */
void MainWindow::setReturnCode(int newReturnCode)
{
	std::string newReturnLabel = "Exit Status: " + std::to_string(newReturnCode); // create a string that displays the Exit Status and concatenate the return code. 
	returnLabel->setText(QString::fromStdString(newReturnLabel)); // set the text for the return code in the UI to the new string. 
}

/**
 * This method adds the command currently in the UI into the command history. 
 * */
void MainWindow::insertIntoHistory()
{
	std::string item = std::to_string(cmdCount) + ". " + commandLine->text().toStdString(); // adds a number value indicating how many commands are in the history and appends the text of the current command to it. 
	QString listItemString = QString::fromStdString(item); 

	new QListWidgetItem(listItemString, historyList); // creates a new QListWidgetItem for the command, and inserts it into the list. 
	cmdCount++;
}

/**
 * This method will display the output of the command double clicked by the user as well as the return code. 
 * */
void MainWindow::showClickedItem()
{
	std::string currentCmd = historyList->currentItem()->text().toStdString(); // sets the current item double clicked into a normal STD string, and puts it in a variable. 
	int pos = (int)currentCmd.at(0); // gets the int value of the char at 0, or the position of the command in the history. 
	pos=pos-48; // converts the int value to the actual position of the command in the list. 
	
	Command clickedCmdObj = listOfItems.at(pos-1); // gets the item at the pos-1 in the list.

	this->setReturnCode(clickedCmdObj.getReturnCode()); // sets the new old return code
	QString resultQStr = QString::fromStdString(clickedCmdObj.getResult()); // sets the new text in the UI. 
	outputText->setText(resultQStr);

}
 