/********************************************************************************
** Form generated from reading UI file 'drum_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUM_WIDGET_H
#define UI_DRUM_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_drum_widget
{
public:
    QGroupBox *drumWidget;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QLabel *label;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_13;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QListWidget *listWidget;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QListWidget *listWidget_2;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QCheckBox *checkBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QRadioButton *metronomeButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *bpmLabel;
    QSlider *bpmSlider;

    void setupUi(QWidget *drum_widget)
    {
        if (drum_widget->objectName().isEmpty())
            drum_widget->setObjectName(QStringLiteral("drum_widget"));
        drum_widget->resize(1268, 717);
        drum_widget->setStyleSheet(QStringLiteral(""));
        drumWidget = new QGroupBox(drum_widget);
        drumWidget->setObjectName(QStringLiteral("drumWidget"));
        drumWidget->setGeometry(QRect(30, 30, 1081, 661));
        QFont font;
        font.setFamily(QStringLiteral("URW Bookman"));
        font.setBold(true);
        font.setWeight(75);
        drumWidget->setFont(font);
        groupBox_2 = new QGroupBox(drumWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 70, 631, 541));
        QFont font1;
        font1.setFamily(QStringLiteral("Sans"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        groupBox_2->setFont(font1);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 260, 111, 111));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-radius: 45px;\n"
"    }\n"
"\n"
""));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 260, 91, 101));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 45px;\n"
"    border-style: none;\n"
"    }\n"
"\n"
""));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 160, 131, 101));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 45px;\n"
"    border-style: none;\n"
"    }\n"
"\n"
""));
        pushButton_3->setFlat(true);
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 190, 91, 81));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 36px;\n"
"    border-style: none;\n"
"    }\n"
"\n"
""));
        pushButton_5->setFlat(true);
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(430, 150, 131, 111));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 45px;\n"
"    border-style: none;\n"
"    }\n"
"\n"
""));
        pushButton_4->setFlat(true);
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(410, 270, 101, 91));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 31px;\n"
"    border-style: none;\n"
"    }\n"
"\n"
""));
        pushButton_7->setFlat(true);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, -30, 611, 621));
        label->setFont(font1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/drum/assets/more_drums.jpg")));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 190, 61, 61));
        pushButton_6->setMinimumSize(QSize(61, 0));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 21px;\n"
"    border-style: none;\n"
"    }\n"
"\n"
""));
        pushButton_6->setFlat(true);
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(310, 290, 21, 31));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"    color: #fff;\n"
"    border: 2px solid #555;\n"
"    border-radius: 45px;\n"
"    border-style: none;\n"
"    }\n"
"\n"
""));
        pushButton_8->setFlat(true);
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_5->raise();
        pushButton_4->raise();
        pushButton_7->raise();
        pushButton_6->raise();
        pushButton_8->raise();
        widget = new QWidget(drumWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-10, -10, 2, 2));
        widget->setFont(font1);
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(drumWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(-10, -10, 2, 2));
        widget1->setFont(font1);
        verticalLayout_7 = new QVBoxLayout(widget1);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(drumWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(-10, -10, 2, 2));
        widget2->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(widget2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(drumWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(570, 50, 80, 25));
        pushButton_13->setFont(font1);
        widget3 = new QWidget(drumWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(670, 130, 361, 501));
        widget3->setFont(font1);
        verticalLayout_10 = new QVBoxLayout(widget3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(widget3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFont(font1);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        verticalLayout_10->addWidget(frame_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame_3 = new QFrame(widget3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFont(font1);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout->addWidget(label_6);

        radioButton = new QRadioButton(frame_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font1);

        horizontalLayout->addWidget(radioButton);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_11 = new QPushButton(frame_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_11);

        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_9);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidget = new QListWidget(frame_3);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setFont(font1);

        verticalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addWidget(frame_3);

        frame_5 = new QFrame(widget3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFont(font1);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_12 = new QPushButton(frame_5);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_12);

        pushButton_10 = new QPushButton(frame_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_10);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        listWidget_2 = new QListWidget(frame_5);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setFont(font1);

        verticalLayout_3->addWidget(listWidget_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(frame_5);


        verticalLayout_10->addLayout(verticalLayout_5);

        widget4 = new QWidget(drumWidget);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(670, 30, 361, 91));
        horizontalLayout_6 = new QHBoxLayout(widget4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font1);
        verticalLayout_12 = new QVBoxLayout(groupBox);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_9->addWidget(label_4);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font1);

        verticalLayout_9->addWidget(checkBox);


        verticalLayout_12->addLayout(verticalLayout_9);


        horizontalLayout_6->addWidget(groupBox);

        groupBox_4 = new QGroupBox(widget4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font1);
        verticalLayout_13 = new QVBoxLayout(groupBox_4);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_8->addWidget(label_2);

        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setFont(font1);

        verticalLayout_8->addWidget(checkBox_3);


        verticalLayout_13->addLayout(verticalLayout_8);


        horizontalLayout_6->addWidget(groupBox_4);

        groupBox_7 = new QGroupBox(widget4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setFont(font1);
        verticalLayout_11 = new QVBoxLayout(groupBox_7);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_11->addWidget(label_8);

        metronomeButton = new QRadioButton(groupBox_7);
        metronomeButton->setObjectName(QStringLiteral("metronomeButton"));
        metronomeButton->setFont(font1);

        verticalLayout_11->addWidget(metronomeButton);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        bpmLabel = new QLabel(groupBox_7);
        bpmLabel->setObjectName(QStringLiteral("bpmLabel"));

        horizontalLayout_8->addWidget(bpmLabel);

        bpmSlider = new QSlider(groupBox_7);
        bpmSlider->setObjectName(QStringLiteral("bpmSlider"));
        bpmSlider->setMinimum(1);
        bpmSlider->setMaximum(120);
        bpmSlider->setValue(60);
        bpmSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(bpmSlider);


        verticalLayout_11->addLayout(horizontalLayout_8);


        horizontalLayout_6->addWidget(groupBox_7);

        groupBox_2->raise();
        frame_6->raise();
        groupBox->raise();
        frame_3->raise();
        frame_5->raise();
        groupBox_4->raise();
        pushButton_13->raise();

        retranslateUi(drum_widget);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(drum_widget);
    } // setupUi

    void retranslateUi(QWidget *drum_widget)
    {
        drum_widget->setWindowTitle(QApplication::translate("drum_widget", "drum_widget", 0));
        drumWidget->setTitle(QApplication::translate("drum_widget", "Drums", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        label->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QString());
        pushButton_13->setText(QApplication::translate("drum_widget", "HINT", 0));
        label_6->setText(QApplication::translate("drum_widget", "HISTORY", 0));
        radioButton->setText(QApplication::translate("drum_widget", "RECORD", 0));
        pushButton_11->setText(QApplication::translate("drum_widget", "DELETE", 0));
        pushButton_9->setText(QApplication::translate("drum_widget", "CLEAR", 0));
        label_7->setText(QApplication::translate("drum_widget", "RECOMMENDATIONS", 0));
        pushButton_12->setText(QApplication::translate("drum_widget", "PLAY ALL", 0));
        pushButton_10->setText(QApplication::translate("drum_widget", "CLEAR", 0));
        label_4->setText(QApplication::translate("drum_widget", "CONFIG", 0));
        checkBox->setText(QApplication::translate("drum_widget", "HAT OPEN", 0));
        label_2->setText(QApplication::translate("drum_widget", "PLAYBACK", 0));
        checkBox_3->setText(QApplication::translate("drum_widget", "ARPEGGIO", 0));
        label_8->setText(QApplication::translate("drum_widget", "METRONOME", 0));
        metronomeButton->setText(QApplication::translate("drum_widget", "Off", 0));
        bpmLabel->setText(QApplication::translate("drum_widget", "BPM:", 0));
    } // retranslateUi

};

namespace Ui {
    class drum_widget: public Ui_drum_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUM_WIDGET_H
