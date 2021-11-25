#ifndef PIANOWIDGET_H
#define PIANOWIDGET_H

#include <QWidget>
#include <QGroupBox>

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

private:
    Ui::pianowidget *ui;
};
#endif // PIANOWIDGET_H
