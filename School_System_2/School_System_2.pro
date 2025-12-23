QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialogadmin.cpp \
    dialoglogin.cpp \
    dialogstudentedit.cpp \
    dialogstudentmenu.cpp \
    dialogstudentregister.cpp \
    dialogstudentremove.cpp \
    dialogteacheredit.cpp \
    dialogteachermenu.cpp \
    dialogteacherregister.cpp \
    dialogteacherremove.cpp \
    main.cpp \
    mainwindow.cpp \
    staff.cpp

HEADERS += \
    dialogadmin.h \
    dialoglogin.h \
    dialogstudentedit.h \
    dialogstudentmenu.h \
    dialogstudentregister.h \
    dialogstudentremove.h \
    dialogteacheredit.h \
    dialogteachermenu.h \
    dialogteacherregister.h \
    dialogteacherremove.h \
    mainwindow.h \
    staff.h

FORMS += \
    dialogadmin.ui \
    dialoglogin.ui \
    dialogstudentedit.ui \
    dialogstudentmenu.ui \
    dialogstudentregister.ui \
    dialogstudentremove.ui \
    dialogteacheredit.ui \
    dialogteachermenu.ui \
    dialogteacherregister.ui \
    dialogteacherremove.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
