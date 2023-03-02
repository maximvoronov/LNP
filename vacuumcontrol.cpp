#include "vacuumcontrol.h"

VacuumControl::VacuumControl(std::shared_ptr<Valve> valve,
                             std::shared_ptr<Sensor> sensor)
{
    valve->setName(QString("M V3211-06"));
    sensor->setName(QString("ISE30A-01-N-M"));
    sensor->setBrand(QString("SMC"));
}
