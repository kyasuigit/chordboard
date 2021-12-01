/********************************************************************************
** Form generated from reading UI file 'instrument_select.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUMENT_SELECT_H
#define UI_INSTRUMENT_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_instrument_select
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *selectLabel;
    QSpacerItem *verticalSpacer_2;
    QComboBox *instrumentCombo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *confirmBox;

    void setupUi(QDialog *instrument_select)
    {
        if (instrument_select->objectName().isEmpty())
            instrument_select->setObjectName(QStringLiteral("instrument_select"));
        instrument_select->resize(333, 140);
        verticalLayout_2 = new QVBoxLayout(instrument_select);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        selectLabel = new QLabel(instrument_select);
        selectLabel->setObjectName(QStringLiteral("selectLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Sans"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        selectLabel->setFont(font);
        selectLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(selectLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        instrumentCombo = new QComboBox(instrument_select);
        instrumentCombo->setObjectName(QStringLiteral("instrumentCombo"));

        verticalLayout->addWidget(instrumentCombo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        confirmBox = new QDialogButtonBox(instrument_select);
        confirmBox->setObjectName(QStringLiteral("confirmBox"));
        confirmBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(confirmBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(instrument_select);

        QMetaObject::connectSlotsByName(instrument_select);
    } // setupUi

    void retranslateUi(QDialog *instrument_select)
    {
        instrument_select->setWindowTitle(QApplication::translate("instrument_select", "instrument_select", nullptr));
        selectLabel->setText(QApplication::translate("instrument_select", "Select an Instrument to Change to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instrument_select: public Ui_instrument_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUMENT_SELECT_H
