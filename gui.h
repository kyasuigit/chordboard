#ifndef gui_h
#define gui_h
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <iostream>
#include <QListWidget>
#include <QTextEdit>

namespace Ui
{
    class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private slots:
    void pushButton();
private:
    QPushButton *m_button;
    QLineEdit *i_text;
    QLineEdit *o_text;
};
#endif