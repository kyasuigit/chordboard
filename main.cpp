/**
 * @file main.cpp
 * @brief the Main class to deploy ChordBoard. Creates the initial MainWindow.
 *
 * @author Kohei Yasui
 * */

#include "mainwindow.h"

#include <QApplication>
/**
 * @brief main Main method to start the initial program
 * @param argc command line parameter
 * @param argv command line parameter
 * @return the return code of the execution of the QApplication.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // create QApplication
    MainWindow w; // create a MainWindow
    a.setWindowIcon(QIcon(":/piano/assets/logo.png")); // sets the icon
    return a.exec(); // executes and returns.
}
