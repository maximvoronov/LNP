#ifndef VACUUMCONTROL_H
#define VACUUMCONTROL_H
#include <valve/valve.h>
#include <sensor/sensor.h>

/*Управление вакуумом*/
class VacuumControl
{
public:
    VacuumControl(std::shared_ptr<Valve> valve,
                  std::shared_ptr<Sensor> sensor);
    Q_DISABLE_COPY_MOVE(VacuumControl);
private:
    std::shared_ptr<Valve> valve;
    std::shared_ptr<Sensor> sensor;
};

#endif // VACUUMCONTROL_H
