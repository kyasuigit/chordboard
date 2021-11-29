QT       += core gui\
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 resources_big

QMAKE_CXXFLAGS += -Wno-deprecated-copy

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Chord.cpp \
    Note.cpp \
    findChord.cpp \
    main.cpp \
    mainwindow.cpp \
    makeSong.cpp

HEADERS += \
    ../../3307 GIT/group57/Chord.h \
    ../../3307 GIT/group57/makeSong.h \
    ../../3307 GIT/group57/makeSong.h \
    Chord.h \
    Note.h \
    findChord.h \
    mainwindow.h \
    makeSong.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    fluteResources.qrc
