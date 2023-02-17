#ifndef SENSORMESSAGES_H
#define SENSORMESSAGES_H
#include <QString>

class SensorMessages
{
public:
    QString SensorOn()const;
    QString SensorOff()const;
    QString DataOutOfRange()const;
    QString TemperatureOutOfRange() const;
    QString OverHeat()const;
    QString CalibrationStart()const;
    QString CurrentOff() const;
    QString ResolutionOff() const;
    QString CalibrationFinish() const;
    QString TurnOn()const;
    QString TurnOff()const;
    ~SensorMessages();
private:
    SensorMessages();
};

#endif // SENSORMESSAGES_H
