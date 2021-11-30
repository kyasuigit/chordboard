/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *fluteWidgetBox;
    QLabel *label;
    QPushButton *pushButton_6;
    QGroupBox *inputBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QFrame *frame;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QListWidget *listWidget_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QRadioButton *metronomeButton;
    QSlider *bpmSlider;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_4;
    QSpinBox *spinBox;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QListWidget *listWidget_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1297, 693);
        fluteWidgetBox = new QGroupBox(Widget);
        fluteWidgetBox->setObjectName(QStringLiteral("fluteWidgetBox"));
        fluteWidgetBox->setGeometry(QRect(30, 0, 1081, 671));
        QFont font;
        font.setFamily(QStringLiteral("URW Bookman"));
        font.setBold(true);
        font.setWeight(75);
        fluteWidgetBox->setFont(font);
        label = new QLabel(fluteWidgetBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 50, 441, 271));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/flute/assets/flute.jpg")));
        label->setScaledContents(true);
        pushButton_6 = new QPushButton(fluteWidgetBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 40, 89, 25));
        pushButton_6->setFont(font1);
        inputBox = new QGroupBox(fluteWidgetBox);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setGeometry(QRect(10, 70, 282, 581));
        inputBox->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(inputBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(inputBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font1);

        horizontalLayout->addWidget(radioButton);

        comboBox = new QComboBox(inputBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setFont(font1);

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(inputBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setFont(font1);

        verticalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout);

        frame = new QFrame(fluteWidgetBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(300, 40, 461, 291));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(fluteWidgetBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(300, 320, 461, 331));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        listWidget_2 = new QListWidget(groupBox);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setFont(font1);

        verticalLayout_3->addWidget(listWidget_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        groupBox_2 = new QGroupBox(fluteWidgetBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(770, 30, 261, 131));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font1);

        horizontalLayout_6->addWidget(checkBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_9->addWidget(label_5);

        metronomeButton = new QRadioButton(groupBox_2);
        metronomeButton->setObjectName(QStringLiteral("metronomeButton"));
        metronomeButton->setFont(font1);

        verticalLayout_9->addWidget(metronomeButton);

        bpmSlider = new QSlider(groupBox_2);
        bpmSlider->setObjectName(QStringLiteral("bpmSlider"));
        bpmSlider->setMinimum(1);
        bpmSlider->setMaximum(120);
        bpmSlider->setValue(60);
        bpmSlider->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(bpmSlider);


        horizontalLayout_6->addLayout(verticalLayout_9);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_4);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setFont(font1);

        horizontalLayout_5->addWidget(spinBox);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_5);


        verticalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_6);

        groupBox_3 = new QGroupBox(fluteWidgetBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(770, 160, 261, 491));
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_5->addLayout(horizontalLayout_4);

        listWidget_3 = new QListWidget(groupBox_3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setFont(font1);

        verticalLayout_5->addWidget(listWidget_3);


        verticalLayout_8->addLayout(verticalLayout_5);

        frame->raise();
        groupBox_2->raise();
        inputBox->raise();
        label_4->raise();
        pushButton_2->raise();
        radioButton->raise();
        label->raise();
        listWidget->raise();
        pushButton->raise();
        pushButton_6->raise();
        comboBox_2->raise();
        label_3->raise();
        comboBox->raise();
        listWidget_2->raise();
        pushButton_3->raise();
        listWidget_3->raise();
        groupBox->raise();
        groupBox_3->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        fluteWidgetBox->setTitle(QApplication::translate("Widget", "Flute", 0));
        label->setText(QString());
        pushButton_6->setText(QApplication::translate("Widget", "Help", 0));
        inputBox->setTitle(QApplication::translate("Widget", "Input:", 0));
        radioButton->setText(QApplication::translate("Widget", "Record", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "OCTAVE", 0)
         << QApplication::translate("Widget", "Octave 4", 0)
         << QApplication::translate("Widget", "Octave 5", 0)
         << QApplication::translate("Widget", "Octave 6", 0)
         << QApplication::translate("Widget", "Octave 7", 0)
        );
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("Widget", "History", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "Minor", 0)
         << QApplication::translate("Widget", "Major", 0)
        );
        pushButton_2->setText(QApplication::translate("Widget", "CLEAR", 0));
        pushButton->setText(QApplication::translate("Widget", "DELETE", 0));
        groupBox_2->setTitle(QString());
        checkBox->setText(QApplication::translate("Widget", "Arpeggio", 0));
        label_5->setText(QApplication::translate("Widget", "Metronome:", 0));
        metronomeButton->setText(QApplication::translate("Widget", "Off", 0));
        pushButton_4->setText(QApplication::translate("Widget", "Find Song", 0));
        pushButton_5->setText(QApplication::translate("Widget", "Play", 0));
        groupBox_3->setTitle(QString());
        label_4->setText(QApplication::translate("Widget", "Recommendations:", 0));
        pushButton_3->setText(QApplication::translate("Widget", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
