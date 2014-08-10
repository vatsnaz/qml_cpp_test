#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "info.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Register info class in QML
    Info m_info;
    engine.rootContext()->setContextProperty("_info", &m_info);

    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

    return app.exec();
}
