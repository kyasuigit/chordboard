/********************************************************************************
** Form generated from reading UI file 'trumpet_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRUMPET_WIDGET_H
#define UI_TRUMPET_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QGroupBox *configBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QComboBox *partialCombo;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_2;
    QComboBox *scaleCombo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QListWidget *inputList;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *removeButton;
    QPushButton *clearButton;
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
    QGroupBox *recordBox;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *recordButton;
    QPushButton *stopButton;
    QGroupBox *recordBox_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *metronome;
    QSlider *sliderBpm;
    QPushButton *inputHelpButton;

    void setupUi(QWidget *trumpet_widget)
    {
        if (trumpet_widget->objectName().isEmpty())
            trumpet_widget->setObjectName(QStringLiteral("trumpet_widget"));
        trumpet_widget->resize(1202, 764);
        widgetBox = new QGroupBox(trumpet_widget);
        widgetBox->setObjectName(QStringLiteral("widgetBox"));
        widgetBox->setGeometry(QRect(40, 60, 1081, 671));
        QFont font;
        font.setFamily(QStringLiteral("URW Bookman"));
        font.setBold(true);
        font.setWeight(75);
        widgetBox->setFont(font);
        configBox = new QGroupBox(widgetBox);
        configBox->setObjectName(QStringLiteral("configBox"));
        configBox->setGeometry(QRect(670, 40, 171, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        configBox->setFont(font1);
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        partialCombo = new QComboBox(configBox);
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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        scaleCombo = new QComboBox(configBox);
        scaleCombo->setObjectName(QStringLiteral("scaleCombo"));
        QFont font2;
        font2.setFamily(QStringLiteral("Sans"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setWeight(50);
        scaleCombo->setFont(font2);

        verticalLayout_3->addWidget(scaleCombo);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_2);

        layoutWidget = new QWidget(widgetBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(670, 150, 361, 491));
        layoutWidget->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font1);
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

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outputList = new QListWidget(groupBox_2);
        outputList->setObjectName(QStringLiteral("outputList"));
        outputList->setFont(font1);

        verticalLayout->addWidget(outputList);


        verticalLayout_6->addWidget(groupBox_2);

        trumpetBox = new QGroupBox(widgetBox);
        trumpetBox->setObjectName(QStringLiteral("trumpetBox"));
        trumpetBox->setGeometry(QRect(20, 40, 641, 601));
        trumpetBox->setFont(font1);
        trumpetLabel = new QLabel(trumpetBox);
        trumpetLabel->setObjectName(QStringLiteral("trumpetLabel"));
        trumpetLabel->setGeometry(QRect(10, 30, 621, 561));
        trumpetLabel->setFont(font1);
        trumpetLabel->setPixmap(QPixmap(QString::fromUtf8(":/trumpet/assets/trumpet_graphic.jpg")));
        trumpetLabel->setScaledContents(true);
        layoutWidget1 = new QWidget(trumpetBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 220, 91, 22));
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
        playButton->setGeometry(QRect(30, 260, 71, 25));
        playButton->setFont(font1);
        recordBox = new QGroupBox(widgetBox);
        recordBox->setObjectName(QStringLiteral("recordBox"));
        recordBox->setGeometry(QRect(940, 40, 91, 101));
        recordBox->setFont(font1);
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

        recordBox_2 = new QGroupBox(widgetBox);
        recordBox_2->setObjectName(QStringLiteral("recordBox_2"));
        recordBox_2->setGeometry(QRect(850, 40, 81, 101));
        recordBox_2->setFont(font1);
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

        inputHelpButton = new QPushButton(widgetBox);
        inputHelpButton->setObjectName(QStringLiteral("inputHelpButton"));
        inputHelpButton->setGeometry(QRect(520, 30, 131, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Sans"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        inputHelpButton->setFont(font3);
        trumpetBox->raise();
        configBox->raise();
        layoutWidget->raise();
        recordBox->raise();
        recordBox_2->raise();
        inputHelpButton->raise();

        retranslateUi(trumpet_widget);

        QMetaObject::connectSlotsByName(trumpet_widget);
    } // setupUi

    void retranslateUi(QWidget *trumpet_widget)
    {
        trumpet_widget->setWindowTitle(QApplication::translate("trumpet_widget", "trumpet_widget", 0));
        widgetBox->setTitle(QApplication::translate("trumpet_widget", "Trumpet", 0));
        configBox->setTitle(QApplication::translate("trumpet_widget", "Config:", 0));
        label->setText(QApplication::translate("trumpet_widget", "Partial:", 0));
        partialCombo->clear();
        partialCombo->insertItems(0, QStringList()
         << QApplication::translate("trumpet_widget", "1st", 0)
         << QApplication::translate("trumpet_widget", "2nd", 0)
         << QApplication::translate("trumpet_widget", "3rd", 0)
         << QApplication::translate("trumpet_widget", "4th", 0)
         << QApplication::translate("trumpet_widget", "5th", 0)
        );
        checkBox->setText(QApplication::translate("trumpet_widget", "Arpeggio", 0));
        scaleCombo->clear();
        scaleCombo->insertItems(0, QStringList()
         << QApplication::translate("trumpet_widget", "C Major", 0)
         << QApplication::translate("trumpet_widget", "Db Major", 0)
         << QApplication::translate("trumpet_widget", "D Major", 0)
         << QApplication::translate("trumpet_widget", "Eb Major", 0)
         << QApplication::translate("trumpet_widget", "E Major", 0)
         << QApplication::translate("trumpet_widget", "F Major", 0)
         << QApplication::translate("trumpet_widget", "Gb Major", 0)
         << QApplication::translate("trumpet_widget", "G Major", 0)
         << QApplication::translate("trumpet_widget", "Ab Major", 0)
         << QApplication::translate("trumpet_widget", "A Major", 0)
         << QApplication::translate("trumpet_widget", "Bb Major", 0)
         << QApplication::translate("trumpet_widget", "B Major", 0)
         << QApplication::translate("trumpet_widget", "C Minor", 0)
         << QApplication::translate("trumpet_widget", "C# Minor", 0)
         << QApplication::translate("trumpet_widget", "D Minor", 0)
         << QApplication::translate("trumpet_widget", "Eb Minor", 0)
         << QApplication::translate("trumpet_widget", "E Minor", 0)
         << QApplication::translate("trumpet_widget", "F Minor", 0)
         << QApplication::translate("trumpet_widget", "F# Minor", 0)
         << QApplication::translate("trumpet_widget", "G Minor", 0)
         << QApplication::translate("trumpet_widget", "G# Minor", 0)
         << QApplication::translate("trumpet_widget", "A Minor", 0)
         << QApplication::translate("trumpet_widget", "Bb Minor", 0)
         << QApplication::translate("trumpet_widget", "B Minor", 0)
        );
        groupBox->setTitle(QApplication::translate("trumpet_widget", "Input History", 0));
        removeButton->setText(QApplication::translate("trumpet_widget", "Remove", 0));
        clearButton->setText(QApplication::translate("trumpet_widget", "Clear", 0));
        groupBox_2->setTitle(QApplication::translate("trumpet_widget", "Output", 0));
        trumpetBox->setTitle(QString());
        trumpetLabel->setText(QString());
        valve1->setText(QString());
        valve2->setText(QString());
        valve3->setText(QString());
        playButton->setText(QApplication::translate("trumpet_widget", "Play", 0));
        recordBox->setTitle(QApplication::translate("trumpet_widget", "Playback:", 0));
        recordButton->setText(QApplication::translate("trumpet_widget", "Record", 0));
        stopButton->setText(QApplication::translate("trumpet_widget", "Stop", 0));
        recordBox_2->setTitle(QApplication::translate("trumpet_widget", "Metronome:", 0));
        metronome->setText(QApplication::translate("trumpet_widget", "Off", 0));
        inputHelpButton->setText(QApplication::translate("trumpet_widget", "Fingering Help", 0));
    } // retranslateUi

};

namespace Ui {
    class trumpet_widget: public Ui_trumpet_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRUMPET_WIDGET_H
