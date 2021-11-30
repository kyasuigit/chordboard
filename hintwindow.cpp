#include "hintwindow.h"
#include "ui_hintwindow.h"

/// @file hintWindow.cpp
/// @brief This class is used to create and another window for displaying a hint to the user for drum parts. The class does not contain anything besides a UI creation and a deconstructor.
/// @authors Kevin Yang


hintWindow::hintWindow(QWidget *parent) :QDialog(parent),ui(new Ui::hintWindow){
    ui->setupUi(this); // Creating the UI.
}


hintWindow::~hintWindow(){
    delete ui; // Deleting the UI.
}
