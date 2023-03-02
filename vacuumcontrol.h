#ifndef VACUUMCONTROL_H
#define VACUUMCONTROL_H
#include <valve.h>
#include <sensor.h>

/*Управление вакуумом*/
class VacuumControl
{
public:
    VacuumControl(std::shared_ptr<Valve> valve,
                  std::shared_ptr<Sensor> sensor);

private:
    std::shared_ptr<Valve> valve;
    std::shared_ptr<Sensor> sensor;

};

#endif // VACUUMCONTROL_H
