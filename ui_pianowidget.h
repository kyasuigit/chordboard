/********************************************************************************
** Form generated from reading UI file 'pianowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
    QHBoxLayout *horizontalLayout;
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
    QGroupBox *groupBox;
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *metronomeBox;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *metronomeButton;
    QLabel *bpmLabel;
    QSlider *bpmSlider;
    QGroupBox *metronomeBox_2;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *recordButton;
    QPushButton *stopButton;
    QListWidget *outputList;
    QListWidget *inputList;
    QLabel *inputHistoryLabel;
    QLabel *outputLabel;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *varBox;
    QVBoxLayout *verticalLayout_14;
    QCheckBox *arpeggioCheck;
    QCheckBox *checkStaccato;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_12;
    QPushButton *removeButton;
    QPushButton *clearButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *currentScaleLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *scaleLabelOutput;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QPushButton *exampleSongWriter;

    void setupUi(QWidget *pianowidget)
    {
        if (pianowidget->objectName().isEmpty())
            pianowidget->setObjectName(QString::fromUtf8("pianowidget"));
        pianowidget->resize(1071, 657);
        horizontalLayout = new QHBoxLayout(pianowidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pianoInterfaceBox = new QGroupBox(pianowidget);
        pianoInterfaceBox->setObjectName(QString::fromUtf8("pianoInterfaceBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman"));
        font.setBold(true);
        font.setWeight(75);
        pianoInterfaceBox->setFont(font);
        pianoInterfaceBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        C = new QPushButton(pianoInterfaceBox);
        C->setObjectName(QString::fromUtf8("C"));
        C->setGeometry(QRect(160, 57, 51, 223));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setBold(false);
        font1.setWeight(50);
        C->setFont(font1);
        C->setFlat(true);
        CS = new QPushButton(pianoInterfaceBox);
        CS->setObjectName(QString::fromUtf8("CS"));
        CS->setGeometry(QRect(199, 57, 27, 128));
        CS->setFont(font1);
        CS->setFlat(true);
        D = new QPushButton(pianoInterfaceBox);
        D->setObjectName(QString::fromUtf8("D"));
        D->setGeometry(QRect(213, 57, 51, 223));
        D->setFont(font1);
        D->setFlat(true);
        E = new QPushButton(pianoInterfaceBox);
        E->setObjectName(QString::fromUtf8("E"));
        E->setGeometry(QRect(262, 57, 53, 223));
        E->setFont(font1);
        E->setFlat(true);
        F = new QPushButton(pianoInterfaceBox);
        F->setObjectName(QString::fromUtf8("F"));
        F->setGeometry(QRect(314, 57, 52, 223));
        F->setFont(font1);
        F->setFlat(true);
        G = new QPushButton(pianoInterfaceBox);
        G->setObjectName(QString::fromUtf8("G"));
        G->setGeometry(QRect(367, 57, 48, 223));
        G->setFont(font1);
        G->setFlat(true);
        A = new QPushButton(pianoInterfaceBox);
        A->setObjectName(QString::fromUtf8("A"));
        A->setGeometry(QRect(418, 57, 51, 223));
        A->setFont(font1);
        A->setFlat(true);
        B = new QPushButton(pianoInterfaceBox);
        B->setObjectName(QString::fromUtf8("B"));
        B->setGeometry(QRect(469, 57, 51, 223));
        B->setFont(font1);
        B->setFlat(true);
        C2 = new QPushButton(pianoInterfaceBox);
        C2->setObjectName(QString::fromUtf8("C2"));
        C2->setGeometry(QRect(520, 57, 51, 223));
        C2->setFont(font1);
        C2->setFlat(true);
        D2 = new QPushButton(pianoInterfaceBox);
        D2->setObjectName(QString::fromUtf8("D2"));
        D2->setGeometry(QRect(571, 57, 51, 223));
        D2->setFont(font1);
        D2->setFlat(true);
        E2 = new QPushButton(pianoInterfaceBox);
        E2->setObjectName(QString::fromUtf8("E2"));
        E2->setGeometry(QRect(623, 57, 51, 223));
        E2->setFont(font1);
        E2->setFlat(true);
        F2 = new QPushButton(pianoInterfaceBox);
        F2->setObjectName(QString::fromUtf8("F2"));
        F2->setGeometry(QRect(673, 57, 52, 223));
        F2->setFont(font1);
        F2->setFlat(true);
        G2 = new QPushButton(pianoInterfaceBox);
        G2->setObjectName(QString::fromUtf8("G2"));
        G2->setGeometry(QRect(725, 57, 51, 223));
        G2->setFont(font1);
        G2->setFlat(true);
        A2 = new QPushButton(pianoInterfaceBox);
        A2->setObjectName(QString::fromUtf8("A2"));
        A2->setGeometry(QRect(776, 57, 52, 223));
        A2->setFont(font1);
        A2->setFlat(true);
        B2 = new QPushButton(pianoInterfaceBox);
        B2->setObjectName(QString::fromUtf8("B2"));
        B2->setGeometry(QRect(828, 57, 51, 223));
        B2->setFont(font1);
        B2->setFlat(true);
        DS = new QPushButton(pianoInterfaceBox);
        DS->setObjectName(QString::fromUtf8("DS"));
        DS->setGeometry(QRect(250, 57, 27, 128));
        DS->setFont(font1);
        DS->setFlat(true);
        FS = new QPushButton(pianoInterfaceBox);
        FS->setObjectName(QString::fromUtf8("FS"));
        FS->setGeometry(QRect(352, 57, 27, 128));
        FS->setFont(font1);
        FS->setFlat(true);
        GS = new QPushButton(pianoInterfaceBox);
        GS->setObjectName(QString::fromUtf8("GS"));
        GS->setGeometry(QRect(403, 57, 27, 128));
        GS->setFont(font1);
        GS->setFlat(true);
        AS = new QPushButton(pianoInterfaceBox);
        AS->setObjectName(QString::fromUtf8("AS"));
        AS->setGeometry(QRect(455, 57, 27, 128));
        AS->setFont(font1);
        AS->setFlat(true);
        CS2 = new QPushButton(pianoInterfaceBox);
        CS2->setObjectName(QString::fromUtf8("CS2"));
        CS2->setGeometry(QRect(558, 57, 27, 128));
        CS2->setFont(font1);
        CS2->setFlat(true);
        DS2 = new QPushButton(pianoInterfaceBox);
        DS2->setObjectName(QString::fromUtf8("DS2"));
        DS2->setGeometry(QRect(609, 57, 27, 128));
        DS2->setFont(font1);
        DS2->setFlat(true);
        FS2 = new QPushButton(pianoInterfaceBox);
        FS2->setObjectName(QString::fromUtf8("FS2"));
        FS2->setGeometry(QRect(712, 57, 27, 128));
        FS2->setFont(font1);
        FS2->setFlat(true);
        GS2 = new QPushButton(pianoInterfaceBox);
        GS2->setObjectName(QString::fromUtf8("GS2"));
        GS2->setGeometry(QRect(763, 57, 27, 128));
        GS2->setFont(font1);
        GS2->setFlat(true);
        AS2 = new QPushButton(pianoInterfaceBox);
        AS2->setObjectName(QString::fromUtf8("AS2"));
        AS2->setGeometry(QRect(814, 57, 27, 128));
        AS2->setFont(font1);
        AS2->setFlat(true);
        piano = new QLabel(pianoInterfaceBox);
        piano->setObjectName(QString::fromUtf8("piano"));
        piano->setGeometry(QRect(160, -10, 720, 360));
        piano->setAutoFillBackground(false);
        piano->setPixmap(QPixmap(QString::fromUtf8(":/piano/piano.webp")));
        piano->setScaledContents(true);
        piano->setTextInteractionFlags(Qt::NoTextInteraction);
        groupBox = new QGroupBox(pianoInterfaceBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 1021, 291));
        pianoModBox = new QGroupBox(groupBox);
        pianoModBox->setObjectName(QString::fromUtf8("pianoModBox"));
        pianoModBox->setGeometry(QRect(10, 40, 121, 231));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        pianoModBox->setFont(font2);
        verticalLayout_5 = new QVBoxLayout(pianoModBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(pianoModBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        verticalLayout->addWidget(label);

        dynamicCombo = new QComboBox(pianoModBox);
        dynamicCombo->addItem(QString());
        dynamicCombo->addItem(QString());
        dynamicCombo->addItem(QString());
        dynamicCombo->setObjectName(QString::fromUtf8("dynamicCombo"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sans"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        dynamicCombo->setFont(font3);

        verticalLayout->addWidget(dynamicCombo);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(pianoModBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

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
        ambiguationCombo->setObjectName(QString::fromUtf8("ambiguationCombo"));
        ambiguationCombo->setFont(font3);

        verticalLayout_2->addWidget(ambiguationCombo);


        verticalLayout_4->addLayout(verticalLayout_2);

        scalePlayButton = new QPushButton(pianoModBox);
        scalePlayButton->setObjectName(QString::fromUtf8("scalePlayButton"));

        verticalLayout_4->addWidget(scalePlayButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(pianoModBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        verticalLayout_3->addWidget(label_3);

        octaveCombo = new QComboBox(pianoModBox);
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->addItem(QString());
        octaveCombo->setObjectName(QString::fromUtf8("octaveCombo"));
        octaveCombo->setFont(font3);

        verticalLayout_3->addWidget(octaveCombo);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(890, 40, 121, 223));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        metronomeBox = new QGroupBox(layoutWidget);
        metronomeBox->setObjectName(QString::fromUtf8("metronomeBox"));
        metronomeBox->setFont(font2);
        verticalLayout_8 = new QVBoxLayout(metronomeBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        metronomeButton = new QRadioButton(metronomeBox);
        metronomeButton->setObjectName(QString::fromUtf8("metronomeButton"));
        metronomeButton->setFont(font2);

        verticalLayout_8->addWidget(metronomeButton);

        bpmLabel = new QLabel(metronomeBox);
        bpmLabel->setObjectName(QString::fromUtf8("bpmLabel"));

        verticalLayout_8->addWidget(bpmLabel);

        bpmSlider = new QSlider(metronomeBox);
        bpmSlider->setObjectName(QString::fromUtf8("bpmSlider"));
        bpmSlider->setMinimum(1);
        bpmSlider->setMaximum(120);
        bpmSlider->setValue(60);
        bpmSlider->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(bpmSlider);


        verticalLayout_6->addWidget(metronomeBox);

        metronomeBox_2 = new QGroupBox(layoutWidget);
        metronomeBox_2->setObjectName(QString::fromUtf8("metronomeBox_2"));
        metronomeBox_2->setFont(font2);
        verticalLayout_7 = new QVBoxLayout(metronomeBox_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        recordButton = new QRadioButton(metronomeBox_2);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        verticalLayout_7->addWidget(recordButton);

        stopButton = new QPushButton(metronomeBox_2);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        verticalLayout_7->addWidget(stopButton);


        verticalLayout_6->addWidget(metronomeBox_2);

        outputList = new QListWidget(pianoInterfaceBox);
        outputList->setObjectName(QString::fromUtf8("outputList"));
        outputList->setGeometry(QRect(530, 340, 331, 291));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Sans"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        outputList->setFont(font4);
        inputList = new QListWidget(pianoInterfaceBox);
        inputList->setObjectName(QString::fromUtf8("inputList"));
        inputList->setGeometry(QRect(180, 340, 331, 291));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Sans"));
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setItalic(true);
        font5.setWeight(50);
        inputList->setFont(font5);
        inputList->setSelectionMode(QAbstractItemView::SingleSelection);
        inputHistoryLabel = new QLabel(pianoInterfaceBox);
        inputHistoryLabel->setObjectName(QString::fromUtf8("inputHistoryLabel"));
        inputHistoryLabel->setGeometry(QRect(180, 320, 101, 17));
        inputHistoryLabel->setFont(font2);
        outputLabel = new QLabel(pianoInterfaceBox);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        outputLabel->setGeometry(QRect(530, 320, 67, 17));
        outputLabel->setFont(font2);
        layoutWidget1 = new QWidget(pianoInterfaceBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 340, 142, 274));
        verticalLayout_15 = new QVBoxLayout(layoutWidget1);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        varBox = new QGroupBox(layoutWidget1);
        varBox->setObjectName(QString::fromUtf8("varBox"));
        varBox->setFont(font2);
        verticalLayout_14 = new QVBoxLayout(varBox);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        arpeggioCheck = new QCheckBox(varBox);
        arpeggioCheck->setObjectName(QString::fromUtf8("arpeggioCheck"));

        verticalLayout_14->addWidget(arpeggioCheck);

        checkStaccato = new QCheckBox(varBox);
        checkStaccato->setObjectName(QString::fromUtf8("checkStaccato"));
        checkStaccato->setEnabled(false);

        verticalLayout_14->addWidget(checkStaccato);


        verticalLayout_11->addWidget(varBox);


        verticalLayout_15->addLayout(verticalLayout_11);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font2);
        verticalLayout_12 = new QVBoxLayout(groupBox_2);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        removeButton = new QPushButton(groupBox_2);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout_12->addWidget(removeButton);

        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setFont(font2);

        verticalLayout_12->addWidget(clearButton);


        verticalLayout_13->addWidget(groupBox_2);


        verticalLayout_15->addLayout(verticalLayout_13);

        layoutWidget2 = new QWidget(pianoInterfaceBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(880, 340, 149, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        currentScaleLabel = new QLabel(layoutWidget2);
        currentScaleLabel->setObjectName(QString::fromUtf8("currentScaleLabel"));
        currentScaleLabel->setFont(font2);

        horizontalLayout_2->addWidget(currentScaleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        scaleLabelOutput = new QLabel(layoutWidget2);
        scaleLabelOutput->setObjectName(QString::fromUtf8("scaleLabelOutput"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Sans"));
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        scaleLabelOutput->setFont(font6);

        horizontalLayout_2->addWidget(scaleLabelOutput);

        label_4 = new QLabel(pianoInterfaceBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(880, 400, 125, 18));
        label_4->setFont(font2);
        groupBox_3 = new QGroupBox(pianoInterfaceBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(880, 400, 151, 71));
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        exampleSongWriter = new QPushButton(groupBox_3);
        exampleSongWriter->setObjectName(QString::fromUtf8("exampleSongWriter"));
        exampleSongWriter->setFont(font2);

        verticalLayout_9->addWidget(exampleSongWriter);

        layoutWidget->raise();
        layoutWidget->raise();
        groupBox->raise();
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
        label_4->raise();

        horizontalLayout->addWidget(pianoInterfaceBox);


        retranslateUi(pianowidget);

        octaveCombo->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(pianowidget);
    } // setupUi

    void retranslateUi(QWidget *pianowidget)
    {
        pianowidget->setWindowTitle(QApplication::translate("pianowidget", "pianowidget", nullptr));
        pianoInterfaceBox->setTitle(QApplication::translate("pianowidget", "Piano", nullptr));
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
        groupBox->setTitle(QString());
        pianoModBox->setTitle(QApplication::translate("pianowidget", "Configuation:", nullptr));
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

        metronomeBox->setTitle(QApplication::translate("pianowidget", "Metronome:", nullptr));
        metronomeButton->setText(QApplication::translate("pianowidget", "Off", nullptr));
        bpmLabel->setText(QApplication::translate("pianowidget", "BPM:", nullptr));
        metronomeBox_2->setTitle(QApplication::translate("pianowidget", "Record:", nullptr));
        recordButton->setText(QApplication::translate("pianowidget", "Record", nullptr));
        stopButton->setText(QApplication::translate("pianowidget", "Stop", nullptr));
        inputHistoryLabel->setText(QApplication::translate("pianowidget", "Input History:", nullptr));
        outputLabel->setText(QApplication::translate("pianowidget", "Output:", nullptr));
        varBox->setTitle(QApplication::translate("pianowidget", "Arrangements:", nullptr));
        arpeggioCheck->setText(QApplication::translate("pianowidget", "Arpeggio", nullptr));
        checkStaccato->setText(QApplication::translate("pianowidget", "Staccato", nullptr));
        groupBox_2->setTitle(QApplication::translate("pianowidget", "Maintenance:", nullptr));
        removeButton->setText(QApplication::translate("pianowidget", "Remove", nullptr));
        clearButton->setText(QApplication::translate("pianowidget", "Clear", nullptr));
        currentScaleLabel->setText(QApplication::translate("pianowidget", "Current Scale:", nullptr));
        scaleLabelOutput->setText(QApplication::translate("pianowidget", "None", nullptr));
        label_4->setText(QApplication::translate("pianowidget", "Features:", nullptr));
        groupBox_3->setTitle(QString());
        exampleSongWriter->setText(QApplication::translate("pianowidget", "Example Song", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pianowidget: public Ui_pianowidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIANOWIDGET_H
