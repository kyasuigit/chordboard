/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *welcomeLabel;
    QLabel *selectLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QComboBox *instrumentCombo;
    QPushButton *goButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(273, 109);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        welcomeLabel = new QLabel(Dialog);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Sans"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(welcomeLabel);

        selectLabel = new QLabel(Dialog);
        selectLabel->setObjectName(QStringLiteral("selectLabel"));
        selectLabel->setFont(font);
        selectLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(selectLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        instrumentCombo = new QComboBox(Dialog);
        instrumentCombo->addItem(QString());
        instrumentCombo->addItem(QString());
        instrumentCombo->addItem(QString());
        instrumentCombo->addItem(QString());
        instrumentCombo->setObjectName(QStringLiteral("instrumentCombo"));

        horizontalLayout->addWidget(instrumentCombo);

        goButton = new QPushButton(Dialog);
        goButton->setObjectName(QStringLiteral("goButton"));

        horizontalLayout->addWidget(goButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        welcomeLabel->setText(QApplication::translate("Dialog", "Welcome to ChordBoard!", nullptr));
        selectLabel->setText(QApplication::translate("Dialog", "Select an Instrument to Start:", nullptr));
        instrumentCombo->setItemText(0, QApplication::translate("Dialog", "Piano", nullptr));
        instrumentCombo->setItemText(1, QApplication::translate("Dialog", "Flute", nullptr));
        instrumentCombo->setItemText(2, QApplication::translate("Dialog", "Drums", nullptr));
        instrumentCombo->setItemText(3, QApplication::translate("Dialog", "Trumpet", nullptr));

        goButton->setText(QApplication::translate("Dialog", "Go!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
