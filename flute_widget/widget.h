#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
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
#include <QFileInfo>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

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

    void on_spinBox_valueChanged(int arg1);

    void on_listWidget_3_itemClicked(QListWidgetItem *item);

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Widget *ui;
    // We need a variable to handle the recording token being pressed.
    bool recording;

    // For storing the octave desired by the user.
    int octave;

    void createList (int octave);

    QListWidgetItem *currentItem;

    bool arpeggio;

    void delay (int msec);

    std::string minorOrMajor;

    int sizeOfSong;
};
#endif // WIDGET_H
