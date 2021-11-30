#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QComboBox>
#include <QPixmap>
#include "dialog.h"
#include "pianowidget.h"
#include "drum_widget.h"
#include "trumpet_widget.h"
#include "instrument_select.h"
#include "widget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString instrType;
    Dialog *dialog;
    instrument_select *selection;
    bool replace;

private slots:
    void onAccept();
    void setUpPiano();
    void setUpDrum();
    void setUpTrumpet();
    void setUpFlute();
    void on_btnExit_clicked();
    void on_btnInstrument_clicked();
    void instrument_changed();
    void on_helpButton_clicked();

};
#endif // MAINWINDOW_H
