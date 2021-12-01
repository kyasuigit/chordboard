/********************************************************************************
** Form generated from reading UI file 'trumpet_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRUMPET_WIDGET_H
#define UI_TRUMPET_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trumpet_widget
{
public:
    QGroupBox *widgetBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *inputLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QListWidget *inputList;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *removeButton;
    QPushButton *clearButton;
    QLabel *outputLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QListWidget *outputList;
    QGroupBox *trumpetBox;
    QLabel *trumpetLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *valve1;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *valve2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *valve3;
    QPushButton *playButton;
    QPushButton *inputHelpButton;
    QLabel *trumpetLabel_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_14;
    QLabel *configLabel;
    QGroupBox *configBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *partialCombo;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QComboBox *scaleCombo;
    QVBoxLayout *verticalLayout_13;
    QLabel *metronomeLabel;
    QGroupBox *recordBox_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *metronome;
    QSlider *sliderBpm;
    QVBoxLayout *verticalLayout_12;
    QLabel *recordLabel;
    QGroupBox *recordBox;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *recordButton;
    QPushButton *stopButton;

    void setupUi(QWidget *trumpet_widget)
    {
        if (trumpet_widget->objectName().isEmpty())
            trumpet_widget->setObjectName(QStringLiteral("trumpet_widget"));
        trumpet_widget->resize(1202, 764);
        widgetBox = new QGroupBox(trumpet_widget);
        widgetBox->setObjectName(QStringLiteral("widgetBox"));
        widgetBox->setGeometry(QRect(40, 80, 1081, 671));
        QFont font;
        font.setFamily(QStringLiteral("URW Bookman"));
        font.setBold(true);
        font.setWeight(75);
        widgetBox->setFont(font);
        widgetBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        layoutWidget = new QWidget(widgetBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(650, 150, 381, 491));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        layoutWidget->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        inputLabel = new QLabel(layoutWidget);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        QFont font2;
        font2.setFamily(QStringLiteral("URW Bookman L"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        inputLabel->setFont(font2);

        verticalLayout_6->addWidget(inputLabel);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        inputList = new QListWidget(groupBox);
        inputList->setObjectName(QStringLiteral("inputList"));
        inputList->setFont(font1);

        verticalLayout_5->addWidget(inputList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setFont(font1);

        horizontalLayout_3->addWidget(removeButton);

        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setFont(font1);

        horizontalLayout_3->addWidget(clearButton);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_6->addWidget(groupBox);

        outputLabel = new QLabel(layoutWidget);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setFont(font2);

        verticalLayout_6->addWidget(outputLabel);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outputList = new QListWidget(groupBox_2);
        outputList->setObjectName(QStringLiteral("outputList"));
        outputList->setFont(font1);

        verticalLayout->addWidget(outputList);


        verticalLayout_6->addWidget(groupBox_2);

        trumpetBox = new QGroupBox(widgetBox);
        trumpetBox->setObjectName(QStringLiteral("trumpetBox"));
        trumpetBox->setGeometry(QRect(10, 40, 631, 601));
        trumpetBox->setFont(font1);
        trumpetBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        trumpetLabel = new QLabel(trumpetBox);
        trumpetLabel->setObjectName(QStringLiteral("trumpetLabel"));
        trumpetLabel->setGeometry(QRect(10, 40, 611, 551));
        trumpetLabel->setFont(font1);
        trumpetLabel->setPixmap(QPixmap(QString::fromUtf8(":/trumpet/assets/trumpet_graphic.jpg")));
        trumpetLabel->setScaledContents(true);
        layoutWidget1 = new QWidget(trumpetBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 220, 91, 24));
        layoutWidget1->setFont(font1);
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        valve1 = new QCheckBox(layoutWidget1);
        valve1->setObjectName(QStringLiteral("valve1"));
        valve1->setFont(font1);

        horizontalLayout->addWidget(valve1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        valve2 = new QCheckBox(layoutWidget1);
        valve2->setObjectName(QStringLiteral("valve2"));
        valve2->setFont(font1);
        valve2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(valve2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        valve3 = new QCheckBox(layoutWidget1);
        valve3->setObjectName(QStringLiteral("valve3"));
        valve3->setFont(font1);
        valve3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(valve3);

        playButton = new QPushButton(trumpetBox);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(20, 270, 71, 25));
        playButton->setFont(font1);
        inputHelpButton = new QPushButton(trumpetBox);
        inputHelpButton->setObjectName(QStringLiteral("inputHelpButton"));
        inputHelpButton->setGeometry(QRect(490, 10, 131, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Sans"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        inputHelpButton->setFont(font3);
        trumpetLabel_2 = new QLabel(widgetBox);
        trumpetLabel_2->setObjectName(QStringLiteral("trumpetLabel_2"));
        trumpetLabel_2->setGeometry(QRect(10, 10, 81, 19));
        QFont font4;
        font4.setFamily(QStringLiteral("URW Bookman L"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        trumpetLabel_2->setFont(font4);
        widget = new QWidget(widgetBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(650, 30, 381, 111));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        configLabel = new QLabel(widget);
        configLabel->setObjectName(QStringLiteral("configLabel"));
        configLabel->setFont(font2);

        verticalLayout_14->addWidget(configLabel);

        configBox = new QGroupBox(widget);
        configBox->setObjectName(QStringLiteral("configBox"));
        configBox->setFont(font1);
        configBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(configBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(configBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        partialCombo = new QComboBox(configBox);
        partialCombo->addItem(QString());
        partialCombo->addItem(QString());
        partialCombo->addItem(QString());
        partialCombo->addItem(QString());
        partialCombo->addItem(QString());
        partialCombo->setObjectName(QStringLiteral("partialCombo"));
        partialCombo->setFont(font1);

        verticalLayout_2->addWidget(partialCombo);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBox = new QCheckBox(configBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font1);

        verticalLayout_3->addWidget(checkBox);

        scaleCombo = new QComboBox(configBox);
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->addItem(QString());
        scaleCombo->setObjectName(QStringLiteral("scaleCombo"));
        QFont font5;
        font5.setFamily(QStringLiteral("Sans"));
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setWeight(50);
        scaleCombo->setFont(font5);

        verticalLayout_3->addWidget(scaleCombo);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_14->addWidget(configBox);


        horizontalLayout_4->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        metronomeLabel = new QLabel(widget);
        metronomeLabel->setObjectName(QStringLiteral("metronomeLabel"));
        metronomeLabel->setFont(font2);

        verticalLayout_13->addWidget(metronomeLabel);

        recordBox_2 = new QGroupBox(widget);
        recordBox_2->setObjectName(QStringLiteral("recordBox_2"));
        recordBox_2->setFont(font1);
        recordBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(recordBox_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        metronome = new QRadioButton(recordBox_2);
        metronome->setObjectName(QStringLiteral("metronome"));
        metronome->setFont(font1);

        verticalLayout_11->addWidget(metronome);

        sliderBpm = new QSlider(recordBox_2);
        sliderBpm->setObjectName(QStringLiteral("sliderBpm"));
        sliderBpm->setMinimum(1);
        sliderBpm->setMaximum(120);
        sliderBpm->setValue(60);
        sliderBpm->setOrientation(Qt::Horizontal);

        verticalLayout_11->addWidget(sliderBpm);


        verticalLayout_10->addLayout(verticalLayout_11);


        verticalLayout_13->addWidget(recordBox_2);


        horizontalLayout_4->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        recordLabel = new QLabel(widget);
        recordLabel->setObjectName(QStringLiteral("recordLabel"));
        recordLabel->setFont(font2);

        verticalLayout_12->addWidget(recordLabel);

        recordBox = new QGroupBox(widget);
        recordBox->setObjectName(QStringLiteral("recordBox"));
        recordBox->setFont(font1);
        recordBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(recordBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        recordButton = new QRadioButton(recordBox);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        recordButton->setFont(font1);

        verticalLayout_4->addWidget(recordButton);

        stopButton = new QPushButton(recordBox);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setFont(font1);

        verticalLayout_4->addWidget(stopButton);


        verticalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_12->addWidget(recordBox);


        horizontalLayout_4->addLayout(verticalLayout_12);

        trumpetBox->raise();
        configBox->raise();
        layoutWidget->raise();
        recordBox->raise();
        recordBox_2->raise();
        recordLabel->raise();
        metronomeLabel->raise();
        configLabel->raise();
        trumpetLabel_2->raise();

        retranslateUi(trumpet_widget);

        QMetaObject::connectSlotsByName(trumpet_widget);
    } // setupUi

    void retranslateUi(QWidget *trumpet_widget)
    {
        trumpet_widget->setWindowTitle(QApplication::translate("trumpet_widget", "trumpet_widget", nullptr));
        widgetBox->setTitle(QString());
        inputLabel->setText(QApplication::translate("trumpet_widget", "Input History:", nullptr));
        groupBox->setTitle(QString());
        removeButton->setText(QApplication::translate("trumpet_widget", "Remove", nullptr));
        clearButton->setText(QApplication::translate("trumpet_widget", "Clear", nullptr));
        outputLabel->setText(QApplication::translate("trumpet_widget", "Output:", nullptr));
        groupBox_2->setTitle(QString());
        trumpetBox->setTitle(QString());
        trumpetLabel->setText(QString());
        valve1->setText(QString());
        valve2->setText(QString());
        valve3->setText(QString());
        playButton->setText(QApplication::translate("trumpet_widget", "Play", nullptr));
        inputHelpButton->setText(QApplication::translate("trumpet_widget", "Fingering Help", nullptr));
        trumpetLabel_2->setText(QApplication::translate("trumpet_widget", "Trumpet", nullptr));
        configLabel->setText(QApplication::translate("trumpet_widget", "Configuration:", nullptr));
        configBox->setTitle(QString());
        label->setText(QApplication::translate("trumpet_widget", "Partial:", nullptr));
        partialCombo->setItemText(0, QApplication::translate("trumpet_widget", "1st", nullptr));
        partialCombo->setItemText(1, QApplication::translate("trumpet_widget", "2nd", nullptr));
        partialCombo->setItemText(2, QApplication::translate("trumpet_widget", "3rd", nullptr));
        partialCombo->setItemText(3, QApplication::translate("trumpet_widget", "4th", nullptr));
        partialCombo->setItemText(4, QApplication::translate("trumpet_widget", "5th", nullptr));

        checkBox->setText(QApplication::translate("trumpet_widget", "Arpeggio", nullptr));
        scaleCombo->setItemText(0, QApplication::translate("trumpet_widget", "C Major", nullptr));
        scaleCombo->setItemText(1, QApplication::translate("trumpet_widget", "Db Major", nullptr));
        scaleCombo->setItemText(2, QApplication::translate("trumpet_widget", "D Major", nullptr));
        scaleCombo->setItemText(3, QApplication::translate("trumpet_widget", "Eb Major", nullptr));
        scaleCombo->setItemText(4, QApplication::translate("trumpet_widget", "E Major", nullptr));
        scaleCombo->setItemText(5, QApplication::translate("trumpet_widget", "F Major", nullptr));
        scaleCombo->setItemText(6, QApplication::translate("trumpet_widget", "Gb Major", nullptr));
        scaleCombo->setItemText(7, QApplication::translate("trumpet_widget", "G Major", nullptr));
        scaleCombo->setItemText(8, QApplication::translate("trumpet_widget", "Ab Major", nullptr));
        scaleCombo->setItemText(9, QApplication::translate("trumpet_widget", "A Major", nullptr));
        scaleCombo->setItemText(10, QApplication::translate("trumpet_widget", "Bb Major", nullptr));
        scaleCombo->setItemText(11, QApplication::translate("trumpet_widget", "B Major", nullptr));
        scaleCombo->setItemText(12, QApplication::translate("trumpet_widget", "C Minor", nullptr));
        scaleCombo->setItemText(13, QApplication::translate("trumpet_widget", "C# Minor", nullptr));
        scaleCombo->setItemText(14, QApplication::translate("trumpet_widget", "D Minor", nullptr));
        scaleCombo->setItemText(15, QApplication::translate("trumpet_widget", "Eb Minor", nullptr));
        scaleCombo->setItemText(16, QApplication::translate("trumpet_widget", "E Minor", nullptr));
        scaleCombo->setItemText(17, QApplication::translate("trumpet_widget", "F Minor", nullptr));
        scaleCombo->setItemText(18, QApplication::translate("trumpet_widget", "F# Minor", nullptr));
        scaleCombo->setItemText(19, QApplication::translate("trumpet_widget", "G Minor", nullptr));
        scaleCombo->setItemText(20, QApplication::translate("trumpet_widget", "G# Minor", nullptr));
        scaleCombo->setItemText(21, QApplication::translate("trumpet_widget", "A Minor", nullptr));
        scaleCombo->setItemText(22, QApplication::translate("trumpet_widget", "Bb Minor", nullptr));
        scaleCombo->setItemText(23, QApplication::translate("trumpet_widget", "B Minor", nullptr));

        metronomeLabel->setText(QApplication::translate("trumpet_widget", "Metronome:", nullptr));
        recordBox_2->setTitle(QString());
        metronome->setText(QApplication::translate("trumpet_widget", "Off", nullptr));
        recordLabel->setText(QApplication::translate("trumpet_widget", "Record:", nullptr));
        recordBox->setTitle(QString());
        recordButton->setText(QApplication::translate("trumpet_widget", "Record", nullptr));
        stopButton->setText(QApplication::translate("trumpet_widget", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class trumpet_widget: public Ui_trumpet_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRUMPET_WIDGET_H
