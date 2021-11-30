#ifndef HINTWINDOW_H
#define HINTWINDOW_H

#include <QDialog>

namespace Ui {
class hintWindow;
}

class hintWindow : public QDialog
{
    Q_OBJECT

public:
    explicit hintWindow(QWidget *parent = nullptr);
    ~hintWindow();

private:
    Ui::hintWindow *ui;
};

#endif // HINTWINDOW_H
