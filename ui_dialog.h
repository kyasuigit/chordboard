/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        welcomeLabel->setText(QApplication::translate("Dialog", "Welcome to ChordBoard!", 0));
        selectLabel->setText(QApplication::translate("Dialog", "Select an Instrument to Start:", 0));
        instrumentCombo->clear();
        instrumentCombo->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Piano", 0)
         << QApplication::translate("Dialog", "Flute", 0)
         << QApplication::translate("Dialog", "Drums", 0)
         << QApplication::translate("Dialog", "Trumpet", 0)
        );
        goButton->setText(QApplication::translate("Dialog", "Go!", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
