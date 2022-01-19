QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DEFINES += QT_DEPRECATED_WARNINGS

VERSION = 1.0.0.2
QMAKE_TARGET_COMPANY = Primes Lab
QMAKE_TARGET_PRODUCT = Prime Counter
QMAKE_TARGET_DESCRIPTION = Prime Counter
QMAKE_TARGET_COPYRIGHT = Molokov Klim

SOURCES += \
    about.cpp \
    content.cpp \
    dialog.cpp \
    dialog2.cpp \
    main.cpp \
    mainwindow.cpp \
    secondwindow.cpp

HEADERS += \
    about.h \
    content.h \
    dialog.h \
    dialog2.h \
    mainwindow.h \
    secondwindow.h

FORMS += \
    about.ui \
    content.ui \
    dialog.ui \
    dialog2.ui \
    mainwindow.ui \
    secondwindow.ui

RC_FILE = icon.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

QT += axcontainer
