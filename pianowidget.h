#ifndef PIANOWIDGET_H
#define PIANOWIDGET_H

#include <QWidget>
#include <QGroupBox>
#include <QPushButton>
#include <QSound>
#include <QSoundEffect>
#include <QPixmap>
#include <QDebug>
#include <QFile>
#include <QListWidgetItem>
#include <QListWidget>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QRandomGenerator>
#include <Chord.h>
#include <string.h>
#include "findChord.h"
#include "makeSong.h"


QT_BEGIN_NAMESPACE
namespace Ui { class pianowidget; }
QT_END_NAMESPACE

class pianowidget : public QWidget
{
    Q_OBJECT

public:
    pianowidget(QWidget *parent = nullptr);
    ~pianowidget();
    QGroupBox *returnWidget();

private slots:

    void on_metronomeButton_clicked(bool checked);

    void playNote();

    void on_octaveCombo_currentIndexChanged(const QString &arg1);

    void on_recordButton_toggled(bool checked);

    void on_stopButton_clicked();

    void on_inputList_itemDoubleClicked(QListWidgetItem *item);

    void playBack(QString note);

    void on_clearButton_clicked();

    void on_arpeggioCheck_stateChanged(int arg1);

    void on_dynamicCombo_currentIndexChanged(const QString &arg1);

    void on_removeButton_clicked();

    void on_checkStaccato_stateChanged(int arg1);

    void on_ambiguationCombo_currentIndexChanged(const QString &arg1);

    void on_scalePlayButton_clicked();

    void on_outputList_itemDoubleClicked(QListWidgetItem *item);

    void on_inputList_itemClicked(QListWidgetItem *item);

    void on_outputList_itemClicked(QListWidgetItem *item);

    void on_bpmSlider_sliderMoved(int position);

    void playTick();
    void on_exampleSongWriter_clicked();

private:
    Ui::pianowidget *ui;
    QString octave, scale, inputScale, outputScale;
    bool record, alreadyRecorded, arpeggio, staccato, chordPlay, pedal, deletion, isNew, init;
    int metronomeBpm;
    Chord currentChord;
    QString dynamic;
    void delay(int msec);
    void output(QString input);
    void createList(Chord input);
    QTimer *timer;

};
#endif // PIANOWIDGET_H
