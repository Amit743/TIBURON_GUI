#-------------------------------------------------
#
# Project created by QtCreator 2020-02-01T16:53:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tiburon_gui
TEMPLATE = app


SOURCES += main.cpp\
        mainwin.cpp\
	  gate.cpp \
	redflare.cpp\
	yellowflare.cpp\
	redbucket.cpp\
	bluebucket.cpp

HEADERS  += mainwin.h\
		gate.h\
	redflare.h\
	yellowflare.h\
	redbucket.h\
	bluebucket.h

FORMS    += mainwin.ui\
		gate.ui\
	redflare.ui\
	yellowflare.ui\
	redbucket.ui\
	bluebucket.ui
