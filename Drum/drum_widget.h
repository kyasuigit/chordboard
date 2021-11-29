#ifndef DRUM_WIDGET_H
#define DRUM_WIDGET_H

#include <QWidget>
#include <QListView>
#include <QMediaPlayer>
#include <string>
#include <QListWidgetItem>
#include <QListWidget>
#include <QString>
#include <QList>
#include <QStringList>
#include <QRegExp>
#include <iostream>
#include <unistd.h>
#include <QSound>
#include <QTimer>
#include <QtAlgorithms>
#include <QTime>
#include "drum.h"
#include <climits>


QT_BEGIN_NAMESPACE
namespace Ui { class drum_widget; }
QT_END_NAMESPACE

class drum_widget : public QWidget
{
    Q_OBJECT

public:
    drum_widget(QWidget *parent = nullptr);
    ~drum_widget();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_checkBox_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

    void on_checkBox_3_toggled(bool checked);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_pushButton_10_clicked();

private:
    Ui::drum_widget *ui;
    // We can make custom methods here.
    bool openOrClosed;
    // We need some dynamic list so we can just store all of the widgets that have been clicked.

    // We need a music player.
    QMediaPlayer *music;

    bool recording;

    QListWidgetItem *currentItem;

    bool arpeggio; // Handling if the user wants an arpeggio for playback.

    // This method will pause the execution of the entire program.
    void delay (int msec);

    QListWidgetItem *recItem;

    void createRecommendations();

};
#endif // DRUM_WIDGET_H
