QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Question.cpp \
    addquestionwindow.cpp \
    adminlogin.cpp \
    adminwindow.cpp \
    editquestionwindow.cpp \
    examwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    studentloginwindow.cpp \
    studentmenuwindow.cpp \
    studentregisterwindow.cpp \
    viewquestionswindow.cpp

HEADERS += \
    Question.h \
    Student.h \
    addquestionwindow.h \
    adminlogin.h \
    adminwindow.h \
    editquestionwindow.h \
    examwindow.h \
    mainwindow.h \
    studentloginwindow.h \
    studentmenuwindow.h \
    studentregisterwindow.h \
    viewquestionswindow.h

FORMS += \
    addquestionwindow.ui \
    adminlogin.ui \
    adminwindow.ui \
    editquestionwindow.ui \
    examwindow.ui \
    mainwindow.ui \
    studentloginwindow.ui \
    studentmenuwindow.ui \
    studentregisterwindow.ui \
    viewquestionswindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
