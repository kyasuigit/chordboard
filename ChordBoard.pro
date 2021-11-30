QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 resources_big

QMAKE_LFLAGS += -no-pie

QMAKE_CXXFLAGS += -Wno-deprecated-copy

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    dialog.cpp \
    mainwindow.cpp \
    pianowidget.cpp \
    instrument_select.cpp \
    Note.cpp \
    Chord.cpp \
    findChord.cpp \
    makeSong.cpp \
    drum_widget.cpp \
    trumpet_widget.cpp \
    drum.cpp \
    hintwindow.cpp

HEADERS += \
    dialog.h \
    mainwindow.h \
    pianowidget.h \
    instrument_select.h \
    Note.h \
    Chord.h \
    findChord.h \
    makeSong.h \
    drum_widget.h \
    trumpet_widget.h \
    drum.h \
    hintwindow.h


FORMS += \
    dialog.ui \
    mainwindow.ui \
    pianowidget.ui \
    instrument_select.ui \
    drum_widget.ui \
    trumpet_widget.ui \
    hintwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
