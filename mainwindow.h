#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QComboBox>
#include "dialog.h"
#include "pianowidget.h"
#include "instrument_select.h"

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

private slots:
    void onAccept();
    void setUpPiano();
    void on_btnExit_clicked();
    void on_btnInstrument_clicked();
    void instrument_changed();
};
#endif // MAINWINDOW_H
