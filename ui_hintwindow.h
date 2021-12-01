/********************************************************************************
** Form generated from reading UI file 'hintwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HINTWINDOW_H
#define UI_HINTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_hintWindow
{
public:
    QLabel *label;

    void setupUi(QDialog *hintWindow)
    {
        if (hintWindow->objectName().isEmpty())
            hintWindow->setObjectName(QStringLiteral("hintWindow"));
        hintWindow->resize(600, 500);
        label = new QLabel(hintWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 581, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/drum/assets/Parts-of-a-drum-set.png")));
        label->setScaledContents(true);

        retranslateUi(hintWindow);

        QMetaObject::connectSlotsByName(hintWindow);
    } // setupUi

    void retranslateUi(QDialog *hintWindow)
    {
        hintWindow->setWindowTitle(QApplication::translate("hintWindow", "Drum Hint", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hintWindow: public Ui_hintWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HINTWINDOW_H
