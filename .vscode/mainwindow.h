/** Kohei Yasui
 *  MainWindow Header
 *  10/03/2021
 **/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow> // include all QT items 
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QLabel>
#include <QString>
#include <QListWidget>
#include "command.h"

namespace Ui // sets the Ui name space to the class MainWindow
{
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	explicit MainWindow(QWidget *parent = nullptr);
private slots: //declare all of the methods to be used in the UI. 
	void handleButton();
	void setReturnCode(int returncode);
	void insertIntoHistory();
	void showClickedItem();

private: // declare all of the instance variables to be used. 
	QPushButton *m_button;
	QLabel *commandLabel, *outputLabel, *returnLabel, *historyLabel;
	QLineEdit *commandLine;
	QTextEdit *outputText, *historyText;
	QListWidget *historyList;
	int cmdCount;
	std::vector<Command> listOfItems;
};
#endif // MAINWINDOW_H