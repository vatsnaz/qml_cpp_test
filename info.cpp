#include "info.h"
#include <QDebug>

Info::Info(QObject *parent) :
    QObject(parent)
{
    _a = 1;
}

Info::~Info()
{
}

int Info::getA()
{
    return _a;
}

void Info::setA(int x)
{
    _a = x;
    emit aChanged();
}
