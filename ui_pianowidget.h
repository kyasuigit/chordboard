/********************************************************************************
** Form generated from reading UI file 'pianowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIANOWIDGET_H
#define UI_PIANOWIDGET_H

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

class Ui_pianowidget
{
public:
    QGroupBox *pianoInterfaceBox;
    QPushButton *C;
    QPushButton *CS;
    QPushButton *D;
    QPushButton *E;
    QPushButton *F;
    QPushButton *G;
    QPushButton *A;
    QPushButton *B;
    QPushButton *C2;
    QPushButton *D2;
    QPushButton *E2;
    QPushButton *F2;
    QPushButton *G2;
    QPushButton *A2;
    QPushButton *B2;
    QPushButton *DS;
    QPushButton *FS;
    QPushButton *GS;
    QPushButton *AS;
    QPushButton *CS2;
    QPushButton *DS2;
    QPushButton *FS2;
    QPushButton *GS2;
    QPushButton *AS2;
    QLabel *piano;
    QListWidget *outputList;
    QListWidget *inputList;
    QLabel *inputHistoryLabel;
    QLabel *outputLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_10;
    QLabel *metronomeLabel;
    QGroupBox *metronomeBox;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *metronomeButton;
    QLabel *bpmLabel;
    QSlider *bpmSlider;
    QVBoxLayout *verticalLayout_16;
    QLabel *recordLabel;
    QGroupBox *metronomeBox_2;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *recordButton;
    QPushButton *stopButton;
    QLabel *pianoLabel;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_15;
    QLabel *arrangementsLabel;
    QGroupBox *varBox;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *arpeggioCheck;
    QCheckBox *checkStaccato;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_18;
    QLabel *maintenanceLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QPushButton *removeButton;
    QPushButton *clearButton;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_2;
    QLabel *currentScaleLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *scaleLabelOutput;
    QVBoxLayout *verticalLayout_20;
    QSpacerItem *verticalSpacer_3;
    QLabel *featuresLabel;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QPushButton *exampleSongWriter;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_22;
    QLabel *configLabel;
    QGroupBox *pianoModBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *dynamicCombo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *ambiguationCombo;
    QPushButton *scalePlayButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *octaveCombo;

    void setupUi(QWidget *pianowidget)
    {
        if (pianowidget->objectName().isEmpty())
            pianowidget->setObjectName(QStringLiteral("pianowidget"));
        pianowidget->resize(1071, 657);
        pianoInterfaceBox = new QGroupBox(pianowidget);
        pianoInterfaceBox->setObjectName(QStringLiteral("pianoInterfaceBox"));
        pianoInterfaceBox->setGeometry(QRect(11, 17, 1051, 631));
        QFont font;
        font.setFamily(QStringLiteral("URW Bookman"));
        font.setBold(true);
        font.setWeight(75);
        pianoInterfaceBox->setFont(font);
        pianoInterfaceBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	background-color: transparent;\n"
"	subcontrol-position: top left;\n"
"	padding:2 13px\n"
"}"));
        pianoInterfaceBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        C = new QPushButton(pianoInterfaceBox);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(160, 57, 51, 223));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setBold(false);
        font1.setWeight(50);
        C->setFont(font1);
        C->setFlat(true);
        CS = new QPushButton(pianoInterfaceBox);
        CS->setObjectName(QStringLiteral("CS"));
        CS->setGeometry(QRect(199, 57, 27, 128));
        CS->setFont(font1);
        CS->setFlat(true);
        D = new QPushButton(pianoInterfaceBox);
        D->setObjectName(QStringLiteral("D"));
        D->setGeometry(QRect(213, 57, 51, 223));
        D->setFont(font1);
        D->setFlat(true);
        E = new QPushButton(pianoInterfaceBox);
        E->setObjectName(QStringLiteral("E"));
        E->setGeometry(QRect(262, 57, 53, 223));
        E->setFont(font1);
        E->setFlat(true);
        F = new QPushButton(pianoInterfaceBox);
        F->setObjectName(QStringLiteral("F"));
        F->setGeometry(QRect(314, 57, 52, 223));
        F->setFont(font1);
        F->setFlat(true);
        G = new QPushButton(pianoInterfaceBox);
        G->setObjectName(QStringLiteral("G"));
        G->setGeometry(QRect(367, 57, 48, 223));
        G->setFont(font1);
        G->setFlat(true);
        A = new QPushButton(pianoInterfaceBox);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(418, 57, 51, 223));
        A->setFont(font1);
        A->setFlat(true);
        B = new QPushButton(pianoInterfaceBox);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(469, 57, 51, 223));
        B->setFont(font1);
        B->setFlat(true);
        C2 = new QPushButton(pianoInterfaceBox);
        C2->setObjectName(QStringLiteral("C2"));
        C2->setGeometry(QRect(520, 57, 51, 223));
        C2->setFont(font1);
        C2->setFlat(true);
        D2 = new QPushButton(pianoInterfaceBox);
        D2->setObjectName(QStringLiteral("D2"));
        D2->setGeometry(QRect(571, 57, 51, 223));
        D2->setFont(font1);
        D2->setFlat(true);
        E2 = new QPushButton(pianoInterfaceBox);
        E2->setObjectName(QStringLiteral("E2"));
        E2->setGeometry(QRect(623, 57, 51, 223));
        E2->setFont(font1);
        E2->setFlat(true);
        F2 = new QPushButton(pianoInterfaceBox);
        F2->setObjectName(QStringLiteral("F2"));
        F2->setGeometry(QRect(673, 57, 52, 223));
        F2->setFont(font1);
        F2->setFlat(true);
        G2 = new QPushButton(pianoInterfaceBox);
        G2->setObjectName(QStringLiteral("G2"));
        G2->setGeometry(QRect(725, 57, 51, 223));
        G2->setFont(font1);
        G2->setFlat(true);
        A2 = new QPushButton(pianoInterfaceBox);
        A2->setObjectName(QStringLiteral("A2"));
        A2->setGeometry(QRect(776, 57, 52, 223));
        A2->setFont(font1);
        A2->setFlat(true);
        B2 = new QPushButton(pianoInterfaceBox);
        B2->setObjectName(QStringLiteral("B2"));
        B2->setGeometry(QRect(828, 57, 51, 223));
        B2->setFont(font1);
        B2->setFlat(true);
        DS = new QPushButton(pianoInterfaceBox);
        DS->setObjectName(QStringLiteral("DS"));
        DS->setGeometry(QRect(250, 57, 27, 128));
        DS->setFont(font1);
        DS->setFlat(true);
        FS = new QPushButton(pianoInterfaceBox);
        FS->setObjectName(QStringLiteral("FS"));
        FS->setGeometry(QRect(352, 57, 27, 128));
        FS->setFont(font1);
        FS->setFlat(true);
        GS = new QPushButton(pianoInterfaceBox);
        GS->setObjectName(QStringLiteral("GS"));
        GS->setGeometry(QRect(403, 57, 27, 128));
        GS->setFont(font1);
        GS->setFlat(true);
        AS = new QPushButton(pianoInterfaceBox);
        AS->setObjectName(QStringLiteral("AS"));
        AS->setGeometry(QRect(455, 57, 27, 128));
        AS->setFont(font1);
        AS->setFlat(true);
        CS2 = new QPushButton(pianoInterfaceBox);
        CS2->setObjectName(QStringLiteral("CS2"));
        CS2->setGeometry(QRect(558, 57, 27, 128));
        CS2->setFont(font1);
        CS2->setFlat(true);
        DS2 = new QPushButton(pianoInterfaceBox);
        DS2->setObjectName(QStringLiteral("DS2"));
        DS2->setGeometry(QRect(609, 57, 27, 128));
        DS2->setFont(font1);
        DS2->setFlat(true);
        FS2 = new QPushButton(pianoInterfaceBox);
        FS2->setObjectName(QStringLiteral("FS2"));
        FS2->setGeometry(QRect(712, 57, 27, 128));
        FS2->setFont(font1);
        FS2->setFlat(true);
        GS2 = new QPushButton(pianoInterfaceBox);
        GS2->setObjectName(QStringLiteral("GS2"));
        GS2->setGeometry(QRect(763, 57, 27, 128));
        GS2->setFont(font1);
        GS2->setFlat(true);
        AS2 = new QPushButton(pianoInterfaceBox);
        AS2->setObjectName(QStringLiteral("AS2"));
        AS2->setGeometry(QRect(814, 57, 27, 128));
        AS2->setFont(font1);
        AS2->setFlat(true);
        piano = new QLabel(pianoInterfaceBox);
        piano->setObjectName(QStringLiteral("piano"));
        piano->setGeometry(QRect(160, -10, 720, 360));
        piano->setAutoFillBackground(false);
        piano->setPixmap(QPixmap(QString::fromUtf8(":/piano/assets/piano.png")));
        piano->setScaledContents(true);
        piano->setTextInteractionFlags(Qt::NoTextInteraction);
        outputList = new QListWidget(pianoInterfaceBox);
        outputList->setObjectName(QStringLiteral("outputList"));
        outputList->setGeometry(QRect(530, 340, 331, 291));
        QFont font2;
        font2.setFamily(QStringLiteral("Sans"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        outputList->setFont(font2);
        inputList = new QListWidget(pianoInterfaceBox);
        inputList->setObjectName(QStringLiteral("inputList"));
        inputList->setGeometry(QRect(180, 340, 331, 291));
        QFont font3;
        font3.setFamily(QStringLiteral("Sans"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        inputList->setFont(font3);
        inputList->setSelectionMode(QAbstractItemView::SingleSelection);
        inputHistoryLabel = new QLabel(pianoInterfaceBox);
        inputHistoryLabel->setObjectName(QStringLiteral("inputHistoryLabel"));
        inputHistoryLabel->setGeometry(QRect(180, 320, 101, 17));
        QFont font4;
        font4.setFamily(QStringLiteral("Sans"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setWeight(50);
        inputHistoryLabel->setFont(font4);
        outputLabel = new QLabel(pianoInterfaceBox);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));
        outputLabel->setGeometry(QRect(530, 320, 67, 17));
        outputLabel->setFont(font4);
        widget = new QWidget(pianoInterfaceBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(900, 40, 131, 241));
        verticalLayout_17 = new QVBoxLayout(widget);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        metronomeLabel = new QLabel(widget);
        metronomeLabel->setObjectName(QStringLiteral("metronomeLabel"));
        QFont font5;
        font5.setFamily(QStringLiteral("URW Bookman L"));
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        metronomeLabel->setFont(font5);

        verticalLayout_10->addWidget(metronomeLabel);

        metronomeBox = new QGroupBox(widget);
        metronomeBox->setObjectName(QStringLiteral("metronomeBox"));
        metronomeBox->setFont(font4);
        metronomeBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(metronomeBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        metronomeButton = new QRadioButton(metronomeBox);
        metronomeButton->setObjectName(QStringLiteral("metronomeButton"));
        metronomeButton->setFont(font4);

        verticalLayout_7->addWidget(metronomeButton);

        bpmLabel = new QLabel(metronomeBox);
        bpmLabel->setObjectName(QStringLiteral("bpmLabel"));
        QFont font6;
        font6.setFamily(QStringLiteral("Sans Serif"));
        font6.setPointSize(9);
        bpmLabel->setFont(font6);

        verticalLayout_7->addWidget(bpmLabel);

        bpmSlider = new QSlider(metronomeBox);
        bpmSlider->setObjectName(QStringLiteral("bpmSlider"));
        bpmSlider->setMinimum(1);
        bpmSlider->setMaximum(120);
        bpmSlider->setValue(60);
        bpmSlider->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(bpmSlider);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_10->addWidget(metronomeBox);


        verticalLayout_17->addLayout(verticalLayout_10);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        recordLabel = new QLabel(widget);
        recordLabel->setObjectName(QStringLiteral("recordLabel"));
        recordLabel->setFont(font5);

        verticalLayout_16->addWidget(recordLabel);

        metronomeBox_2 = new QGroupBox(widget);
        metronomeBox_2->setObjectName(QStringLiteral("metronomeBox_2"));
        QFont font7;
        font7.setFamily(QStringLiteral("URW Bookman L"));
        font7.setPointSize(10);
        font7.setBold(true);
        font7.setWeight(75);
        metronomeBox_2->setFont(font7);
        metronomeBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(metronomeBox_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        recordButton = new QRadioButton(metronomeBox_2);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        QFont font8;
        font8.setFamily(QStringLiteral("Sans Serif"));
        font8.setPointSize(9);
        font8.setBold(false);
        font8.setWeight(50);
        recordButton->setFont(font8);

        verticalLayout_6->addWidget(recordButton);

        stopButton = new QPushButton(metronomeBox_2);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setFont(font8);

        verticalLayout_6->addWidget(stopButton);


        verticalLayout_16->addWidget(metronomeBox_2);


        verticalLayout_17->addLayout(verticalLayout_16);

        pianoLabel = new QLabel(pianoInterfaceBox);
        pianoLabel->setObjectName(QStringLiteral("pianoLabel"));
        pianoLabel->setGeometry(QRect(10, 10, 61, 19));
        QFont font9;
        font9.setFamily(QStringLiteral("URW Bookman L"));
        font9.setPointSize(12);
        font9.setBold(true);
        font9.setItalic(false);
        font9.setWeight(75);
        pianoLabel->setFont(font9);
        widget1 = new QWidget(pianoInterfaceBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 360, 131, 201));
        verticalLayout_19 = new QVBoxLayout(widget1);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        arrangementsLabel = new QLabel(widget1);
        arrangementsLabel->setObjectName(QStringLiteral("arrangementsLabel"));
        arrangementsLabel->setFont(font5);

        verticalLayout_15->addWidget(arrangementsLabel);

        varBox = new QGroupBox(widget1);
        varBox->setObjectName(QStringLiteral("varBox"));
        varBox->setFont(font4);
        varBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_14 = new QVBoxLayout(varBox);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        arpeggioCheck = new QCheckBox(varBox);
        arpeggioCheck->setObjectName(QStringLiteral("arpeggioCheck"));
        arpeggioCheck->setFont(font6);

        verticalLayout_11->addWidget(arpeggioCheck);

        checkStaccato = new QCheckBox(varBox);
        checkStaccato->setObjectName(QStringLiteral("checkStaccato"));
        checkStaccato->setEnabled(false);
        checkStaccato->setFont(font6);

        verticalLayout_11->addWidget(checkStaccato);


        verticalLayout_14->addLayout(verticalLayout_11);


        verticalLayout_15->addWidget(varBox);


        verticalLayout_19->addLayout(verticalLayout_15);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        maintenanceLabel = new QLabel(widget1);
        maintenanceLabel->setObjectName(QStringLiteral("maintenanceLabel"));
        maintenanceLabel->setFont(font5);

        verticalLayout_18->addWidget(maintenanceLabel);

        groupBox_2 = new QGroupBox(widget1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font4);
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_13 = new QVBoxLayout(groupBox_2);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        removeButton = new QPushButton(groupBox_2);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setFont(font6);

        verticalLayout_12->addWidget(removeButton);

        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setFont(font4);

        verticalLayout_12->addWidget(clearButton);


        verticalLayout_13->addLayout(verticalLayout_12);


        verticalLayout_18->addWidget(groupBox_2);


        verticalLayout_19->addLayout(verticalLayout_18);

        widget2 = new QWidget(pianoInterfaceBox);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(870, 350, 161, 131));
        verticalLayout_21 = new QVBoxLayout(widget2);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        currentScaleLabel = new QLabel(widget2);
        currentScaleLabel->setObjectName(QStringLiteral("currentScaleLabel"));
        currentScaleLabel->setFont(font4);

        horizontalLayout_2->addWidget(currentScaleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        scaleLabelOutput = new QLabel(widget2);
        scaleLabelOutput->setObjectName(QStringLiteral("scaleLabelOutput"));
        QFont font10;
        font10.setFamily(QStringLiteral("Sans"));
        font10.setPointSize(10);
        font10.setBold(true);
        font10.setWeight(75);
        scaleLabelOutput->setFont(font10);

        horizontalLayout_2->addWidget(scaleLabelOutput);


        verticalLayout_21->addLayout(horizontalLayout_2);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_3);

        featuresLabel = new QLabel(widget2);
        featuresLabel->setObjectName(QStringLiteral("featuresLabel"));
        featuresLabel->setFont(font5);

        verticalLayout_20->addWidget(featuresLabel);

        groupBox_3 = new QGroupBox(widget2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        exampleSongWriter = new QPushButton(groupBox_3);
        exampleSongWriter->setObjectName(QStringLiteral("exampleSongWriter"));
        exampleSongWriter->setFont(font4);

        verticalLayout_9->addWidget(exampleSongWriter);


        verticalLayout_20->addWidget(groupBox_3);


        verticalLayout_21->addLayout(verticalLayout_20);

        widget3 = new QWidget(pianoInterfaceBox);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(20, 50, 121, 231));
        verticalLayout_22 = new QVBoxLayout(widget3);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        configLabel = new QLabel(widget3);
        configLabel->setObjectName(QStringLiteral("configLabel"));
        configLabel->setFont(font5);

        verticalLayout_22->addWidget(configLabel);

        pianoModBox = new QGroupBox(widget3);
        pianoModBox->setObjectName(QStringLiteral("pianoModBox"));
        pianoModBox->setFont(font4);
        pianoModBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"	border: 1px solid gray;\n"
"	border-radius: 1px;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(pianoModBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(pianoModBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font4);

        verticalLayout->addWidget(label);

        dynamicCombo = new QComboBox(pianoModBox);
        dynamicCombo->addItem(QString());
        dynamicCombo->addItem(QString());
        dynamicCombo->addItem(QString());
        dynamicCombo->setObjectName(QStringLiteral("dynamicCombo"));
        QFont font11;
        font11.setFamily(QStringLiteral("Sans"));
        font11.setPointSize(8);
        font11.setBold(false);
        font11.setWeight(50);
        dynamicCombo->setFont(font11);

        verticalLayout->addWidget(dynamicCombo);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(pianoModBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font4);

        verticalLayout_2->addWidget(label_2);

        ambiguationCombo = new QComboBox(pianoModBox);
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->addItem(QString());
        ambiguationCombo->setObjectName(QStringLiteral("ambiguationCombo"));
        ambiguationCombo->setFont(font11);

        verticalLayout_2->addWidget(ambiguationCombo);


        verticalLayout_4->addLayout(verticalLayout_2);

        scalePlayButton = new QPushButton(pianoModBox);
        scalePlayButton->setObjectName(QStringLiteral("scalePlayButton"));

        verticalLayout_4->addWidget(scalePlayButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(pianoModBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        verticalLayout_3->addWidget(label_3);

        octaveCombo = new QComboBox(pianoModBox);
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->setObjectName(QStringLiteral("octaveCombo"));
        octaveCombo->setFont(font11);

        verticalLayout_3->addWidget(octaveCombo);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_22->addWidget(pianoModBox);

        piano->raise();
        B2->raise();
        A2->raise();
        G2->raise();
        F2->raise();
        E2->raise();
        C2->raise();
        D2->raise();
        B->raise();
        A->raise();
        G->raise();
        F->raise();
        E->raise();
        C->raise();
        D->raise();
        FS2->raise();
        GS2->raise();
        CS->raise();
        AS2->raise();
        DS2->raise();
        CS2->raise();
        AS->raise();
        GS->raise();
        FS->raise();
        DS->raise();
        inputList->raise();
        outputList->raise();
        inputHistoryLabel->raise();
        outputLabel->raise();
        featuresLabel->raise();
        groupBox_3->raise();
        maintenanceLabel->raise();
        arrangementsLabel->raise();
        pianoModBox->raise();
        configLabel->raise();
        pianoLabel->raise();

        retranslateUi(pianowidget);

        octaveCombo->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(pianowidget);
    } // setupUi

    void retranslateUi(QWidget *pianowidget)
    {
        pianowidget->setWindowTitle(QApplication::translate("pianowidget", "pianowidget", nullptr));
        pianoInterfaceBox->setTitle(QString());
        C->setText(QString());
        CS->setText(QString());
        D->setText(QString());
        E->setText(QString());
        F->setText(QString());
        G->setText(QString());
        A->setText(QString());
        B->setText(QString());
        C2->setText(QString());
        D2->setText(QString());
        E2->setText(QString());
        F2->setText(QString());
        G2->setText(QString());
        A2->setText(QString());
        B2->setText(QString());
        DS->setText(QString());
        FS->setText(QString());
        GS->setText(QString());
        AS->setText(QString());
        CS2->setText(QString());
        DS2->setText(QString());
        FS2->setText(QString());
        GS2->setText(QString());
        AS2->setText(QString());
        piano->setText(QString());
        inputHistoryLabel->setText(QApplication::translate("pianowidget", "Input History:", nullptr));
        outputLabel->setText(QApplication::translate("pianowidget", "Output:", nullptr));
        metronomeLabel->setText(QApplication::translate("pianowidget", "Metronome:", nullptr));
        metronomeBox->setTitle(QString());
        metronomeButton->setText(QApplication::translate("pianowidget", "Off", nullptr));
        bpmLabel->setText(QApplication::translate("pianowidget", "BPM:", nullptr));
        recordLabel->setText(QApplication::translate("pianowidget", "Record:", nullptr));
        metronomeBox_2->setTitle(QString());
        recordButton->setText(QApplication::translate("pianowidget", "Record", nullptr));
        stopButton->setText(QApplication::translate("pianowidget", "Stop", nullptr));
        pianoLabel->setText(QApplication::translate("pianowidget", "Piano", nullptr));
        arrangementsLabel->setText(QApplication::translate("pianowidget", "Arrangements:", nullptr));
        varBox->setTitle(QString());
        arpeggioCheck->setText(QApplication::translate("pianowidget", "Arpeggio", nullptr));
        checkStaccato->setText(QApplication::translate("pianowidget", "Staccato", nullptr));
        maintenanceLabel->setText(QApplication::translate("pianowidget", "Maintenance:", nullptr));
        groupBox_2->setTitle(QString());
        removeButton->setText(QApplication::translate("pianowidget", "Remove", nullptr));
        clearButton->setText(QApplication::translate("pianowidget", "Clear", nullptr));
        currentScaleLabel->setText(QApplication::translate("pianowidget", "Current Scale:", nullptr));
        scaleLabelOutput->setText(QApplication::translate("pianowidget", "None", nullptr));
        featuresLabel->setText(QApplication::translate("pianowidget", "Features:", nullptr));
        groupBox_3->setTitle(QString());
        exampleSongWriter->setText(QApplication::translate("pianowidget", "Example Song", nullptr));
        configLabel->setText(QApplication::translate("pianowidget", "Configuration:", nullptr));
        pianoModBox->setTitle(QString());
        label->setText(QApplication::translate("pianowidget", "Dynamic:", nullptr));
        dynamicCombo->setItemText(0, QApplication::translate("pianowidget", "Normal", nullptr));
        dynamicCombo->setItemText(1, QApplication::translate("pianowidget", "Forte", nullptr));
        dynamicCombo->setItemText(2, QApplication::translate("pianowidget", "Piano", nullptr));

        label_2->setText(QApplication::translate("pianowidget", "Scale:", nullptr));
        ambiguationCombo->setItemText(0, QApplication::translate("pianowidget", "C Major", nullptr));
        ambiguationCombo->setItemText(1, QApplication::translate("pianowidget", "Db Major", nullptr));
        ambiguationCombo->setItemText(2, QApplication::translate("pianowidget", "D Major", nullptr));
        ambiguationCombo->setItemText(3, QApplication::translate("pianowidget", "Eb Major", nullptr));
        ambiguationCombo->setItemText(4, QApplication::translate("pianowidget", "E Major", nullptr));
        ambiguationCombo->setItemText(5, QApplication::translate("pianowidget", "F Major", nullptr));
        ambiguationCombo->setItemText(6, QApplication::translate("pianowidget", "Gb Major", nullptr));
        ambiguationCombo->setItemText(7, QApplication::translate("pianowidget", "G Major", nullptr));
        ambiguationCombo->setItemText(8, QApplication::translate("pianowidget", "Ab Major", nullptr));
        ambiguationCombo->setItemText(9, QApplication::translate("pianowidget", "A Major", nullptr));
        ambiguationCombo->setItemText(10, QApplication::translate("pianowidget", "Bb Major", nullptr));
        ambiguationCombo->setItemText(11, QApplication::translate("pianowidget", "B Major", nullptr));
        ambiguationCombo->setItemText(12, QApplication::translate("pianowidget", "C Minor", nullptr));
        ambiguationCombo->setItemText(13, QApplication::translate("pianowidget", "C# Minor", nullptr));
        ambiguationCombo->setItemText(14, QApplication::translate("pianowidget", "D Minor", nullptr));
        ambiguationCombo->setItemText(15, QApplication::translate("pianowidget", "Eb Minor", nullptr));
        ambiguationCombo->setItemText(16, QApplication::translate("pianowidget", "E Minor", nullptr));
        ambiguationCombo->setItemText(17, QApplication::translate("pianowidget", "F Minor", nullptr));
        ambiguationCombo->setItemText(18, QApplication::translate("pianowidget", "F# Minor", nullptr));
        ambiguationCombo->setItemText(19, QApplication::translate("pianowidget", "G Minor", nullptr));
        ambiguationCombo->setItemText(20, QApplication::translate("pianowidget", "G# Minor", nullptr));
        ambiguationCombo->setItemText(21, QApplication::translate("pianowidget", "A Minor", nullptr));
        ambiguationCombo->setItemText(22, QApplication::translate("pianowidget", "Bb Minor", nullptr));
        ambiguationCombo->setItemText(23, QApplication::translate("pianowidget", "B Minor", nullptr));

        scalePlayButton->setText(QApplication::translate("pianowidget", "Play Scale ", nullptr));
        label_3->setText(QApplication::translate("pianowidget", "Octave:", nullptr));
        octaveCombo->setItemText(0, QApplication::translate("pianowidget", "0", nullptr));
        octaveCombo->setItemText(1, QApplication::translate("pianowidget", "1-2", nullptr));
        octaveCombo->setItemText(2, QApplication::translate("pianowidget", "3-4", nullptr));
        octaveCombo->setItemText(3, QApplication::translate("pianowidget", "5-6", nullptr));
        octaveCombo->setItemText(4, QApplication::translate("pianowidget", "7-8", nullptr));

    } // retranslateUi

};

namespace Ui {
    class pianowidget: public Ui_pianowidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIANOWIDGET_H
