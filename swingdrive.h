#ifndef SWINGDRIVE_H
#define SWINGDRIVE_H
#include <QThread>
#include <sensor.h>
#include <encoder.h>
#include <engine.h>

class SwingDrive
{
public:
    SwingDrive();


    SwingDrive(std::shared_ptr<Sensor> sensor,
               std::shared_ptr<Encoder> encoder,
               std::shared_ptr<Engine> engine);

    ~SwingDrive();

private:
    std::shared_ptr<Sensor> sensor;
    std::shared_ptr<Encoder> encoder;
    std::shared_ptr<Engine> engine;
};

#endif // SWINGDRIVE_H
