#ifndef TRUMPET_WIDGET_H
#define TRUMPET_WIDGET_H

#include <QWidget>
#include <QFile>
#include <QSound>
#include <QTextStream>
#include <QDebug>
#include <QSoundEffect>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QListWidget>
#include <QTime>
#include <QTimer>
#include <QKeyEvent>
#include "Chord.h"
#include "findChord.h"

QT_BEGIN_NAMESPACE
namespace Ui { class trumpet_widget; }
QT_END_NAMESPACE

class trumpet_widget : public QWidget
{
    Q_OBJECT

public:
    trumpet_widget(QWidget *parent = nullptr);
    ~trumpet_widget();
    QWidget* returnWidget();

private slots:
    void on_valve1_stateChanged(int arg1);

    void on_valve2_stateChanged(int arg1);

    void on_valve3_stateChanged(int arg1);

    void on_playButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_recordButton_toggled(bool checked);

    void on_partialCombo_currentIndexChanged(int index);

    void on_stopButton_clicked();

    void on_clearButton_clicked();

    void on_removeButton_clicked();

    void on_inputList_itemClicked(QListWidgetItem *item);

    void delay(int msecs);

    void on_metronome_toggled(bool checked);

    void on_sliderBpm_sliderMoved(int position);

    void on_inputHelpButton_clicked();

    void on_scaleCombo_currentIndexChanged(const QString &arg1);

    void on_outputList_itemClicked(QListWidgetItem *item);

private:
    Ui::trumpet_widget *ui;
    int valveOne, valveTwo, valveThree, partial;
    bool arpeggio, recordOn, isNew, init, deletion;
    QFile file;
    QString currentComb, scale, inputScale;

    QTimer *timer;
    int metronomeBpm;
    void playTick();
    void displayOutput(QString notes);

protected:
    void keyPressEvent(QKeyEvent *event) override;
};
#endif // TRUMPET_WIDGET_H
