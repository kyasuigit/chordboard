#include "gui.h"
MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent)
{
    i_text = new QLineEdit("Input", this);
    i_text->setGeometry(QRect(QPoint(100,50),QSize(300,200)));
    o_text = new QLineEdit("Output", this);
    o_text->setGeometry(QRect(QPoint(100,250),QSize(300,200)));
    o_text->setReadOnly(true);
    m_button = new QPushButton("Execute", this);
    m_button->setGeometry(QRect(QPoint(450,125),QSize(200,50)));
    connect(m_button, &QPushButton::released, this, &MainWindow::pushButton);
}