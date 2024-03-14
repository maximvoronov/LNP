#ifndef SENSORMESSAGES_H
#define SENSORMESSAGES_H
#include <QString>
class SensorMessages final
{
public:
    QString SensorOn() const noexcept;
    QString SensorOff()const noexcept;
    QString DataOutOfRange()const noexcept;
    QString TemperatureOutOfRange()const noexcept;
    QString OverHeat()const noexcept;
    QString CalibrationStart()const noexcept;
    QString CurrentOff() const noexcept;
    QString ResolutionOff() const noexcept;
    QString CalibrationSart() const noexcept;
    QString CalibrationFinish() const noexcept;
    QString TurnOn()const noexcept;
    QString TurnOff()const noexcept;
    QString NoNitrogen() const noexcept;
    QString NoVacuum() const noexcept;
    QString NoAir() const noexcept;
    Q_DISABLE_COPY(SensorMessages);
private:
    SensorMessages();
};

#endif // SENSORMESSAGES_H
