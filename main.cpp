#include "gui.h"
#include "code.h"
#include <QApplication>
/**
 * John Dick
 * CS3307
 * Main file
 **/
int main(int argc, char *argv[]){  //main function
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.showMaximized();  
    return app.exec();
}