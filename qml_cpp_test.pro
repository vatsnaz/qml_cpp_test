TEMPLATE = app

QT += qml quick

HEADERS += info.h
SOURCES += main.cpp info.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)
