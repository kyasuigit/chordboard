#ifndef INSTRUMENT_SELECT_H
#define INSTRUMENT_SELECT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class instrument_select; }
QT_END_NAMESPACE

class instrument_select : public QDialog
{
    Q_OBJECT

public:
    instrument_select(QWidget *parent = nullptr);
    QString returnSelection();
    void insertInstr(QString item);
    ~instrument_select();

private slots:
    void on_confirmBox_accepted();

    void on_confirmBox_rejected();

private:
    Ui::instrument_select *ui;
};
#endif // INSTRUMENT_SELECT_H
