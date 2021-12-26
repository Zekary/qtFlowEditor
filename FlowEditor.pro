QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    class_Charts/chart_base.cpp \
    class_Charts/chart_diamond.cpp \
    class_Charts/chart_ellipse.cpp \
    class_Charts/chart_label.cpp \
    class_Charts/chart_line.cpp \
    class_Charts/chart_parall.cpp \
    class_Charts/chart_plaintext.cpp \
    class_Charts/chart_rect.cpp \
    class_Charts/chart_roundrect.cpp \
    class_Charts/chart_trapezoid.cpp \
    class_Charts/chart_triangle.cpp \
    class_Charts/chart_user.cpp \
    flowchart.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    class_Charts/chart_base.h \
    class_Charts/chart_diamond.h \
    class_Charts/chart_ellipse.h \
    class_Charts/chart_label.h \
    class_Charts/chart_line.h \
    class_Charts/chart_parall.h \
    class_Charts/chart_plaintext.h \
    class_Charts/chart_rect.h \
    class_Charts/chart_roundrect.h \
    class_Charts/chart_trapezoid.h \
    class_Charts/chart_triangle.h \
    class_Charts/chart_user.h \
    comdef.h \
    flowchart.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc



#QT       += core gui

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#TARGET = FlowChartTools
#TEMPLATE = app

## The following define makes your compiler emit warnings if you use
## any feature of Qt which has been marked as deprecated (the exact warnings
## depend on your compiler). Please consult the documentation of the
## deprecated API in order to know how to port your code away from it.
#DEFINES += QT_DEPRECATED_WARNINGS

## You can also make your code fail to compile if you use deprecated APIs.
## In order to do so, uncomment the following line.
## You can also select to disable deprecated APIs only up to a certain version of Qt.
##DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#CONFIG += c++11


#SOURCES += \
#    class_Charts/class_rect.cpp \
#        main.cpp \
#        mainwindow.cpp \
#    flowchart.cpp \
#    class_Charts/chart_rect.cpp \
#    class_Charts/chart_diamond.cpp \
#    class_Charts/chart_roundrect.cpp \
#    class_Charts/chart_ellipse.cpp \
#    class_Charts/chart_label.cpp \
#    class_Charts/chart_base.cpp \
#    class_Charts/chart_plaintext.cpp \
#    class_Charts/chart_line.cpp \
#    class_Charts/chart_trapezoid.cpp

#HEADERS += \
#    class_Charts/class_rect.h \
#        mainwindow.h \
#    flowchart.h \
#    class_Charts/chart_rect.h \
#    class_Charts/chart_diamond.h \
#    class_Charts/chart_base.h \
#    comdef.h \
#    class_Charts/chart_roundrect.h \
#    class_Charts/chart_ellipse.h \
#    class_Charts/chart_label.h \
#    class_Charts/chart_plaintext.h \
#    class_Charts/chart_line.h \
#    class_Charts/chart_trapezoid.h

#FORMS += \
#        mainwindow.ui

## Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target

#RESOURCES += \
#    res.qrc
