/** Kohei Yasui
 *  Main Class for CommandGUI
 *  10/03/2021
 **/

#include <QApplication>
#include "mainwindow.h"
using namespace std;

/**
 * This is the main method to start the UI application, utilizing a MainWindow object. 
 * */

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // create the app
    MainWindow window; // create a MainWindow object to create the GUI
    window.show(); 
    return app.exec();
}