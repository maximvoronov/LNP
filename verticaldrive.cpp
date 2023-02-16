#include "verticaldrive.h"

VerticalDrive::VerticalDrive()
{
    sensor = new Sensor();
    sensor->setName("EE-SX951-R");
    sensor->setBrand("Omron");
    sensor->setWidth(0);
    sensor->setCurrent(15);
    sensor->setVoltage(24);
    sensor->setRessistance(1.5);

   // brake = new Brake();
}
