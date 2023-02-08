#ifndef SENSOR_H
#define SENSOR_H
#include <QString>
#include <QTime>

class Sensor
{
public:
    enum State { On = 201, Off };
    enum LightSource {};
    Sensor();

private:
    QString name;
    QString type;
    QString power;
    int current;
    QTime response;


};

#endif // SENSOR_H
