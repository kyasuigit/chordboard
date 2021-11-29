#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSound>
#include <QListWidgetItem>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QTime>
#include "makeSong.h"
#include "findChord.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_comboBox_activated(int index);

    void on_radioButton_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_checkBox_toggled(bool checked);

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_comboBox_2_activated(int index);

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;

    // We need a variable to handle the recording token being pressed.
    bool recording;

    // For storing the octave desired by the user.
    int octave;

    void createList (int octave);

    QListWidgetItem *currentItem;

    bool arpeggio;

    void delay (int msec);

    int minorOrMajor;

};
#endif // MAINWINDOW_H
