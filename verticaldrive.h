#ifndef VERTICALDRIVE_H
#define VERTICALDRIVE_H
#include <QThread>
#include <sensor.h>
#include <Brake.h>

/*Привод вертикального перемещения*/
class VerticalDrive
{
public:
    VerticalDrive();
    //bool updateData();
    bool animate();

private:
    Sensor *sensor;
    Brake *brake;
};

#endif // VERTICALDRIVE_H
