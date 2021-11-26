#include "drum_widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    drum_widget w;
    w.show();
    return a.exec();
}
