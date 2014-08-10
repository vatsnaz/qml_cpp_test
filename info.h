#ifndef __INFO_H__
#define __INFO_H__

#include <QObject>
#include <QTimer>

class Info : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int a READ getA WRITE setA NOTIFY aChanged)

public:
    explicit Info(QObject *parent = 0);
    virtual ~Info();

    int getA();

public slots:
    void setA(int);

signals:
    void aChanged();

private:
    int _a;
};

#endif /* __INFO_H__ */
