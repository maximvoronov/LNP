#ifndef MANIPULATORTRAVELDRIVE_H
#define MANIPULATORTRAVELDRIVE_H
#include <QThread>
#include <sensor.h>
#include <engine.h>
#include <fan.h>
#include <encoder.h>

class ManipulatorTravelDrive
{
public:
    ManipulatorTravelDrive(std::shared_ptr<Engine> engine,
                           std::shared_ptr<Encoder> encoder,
                           std::shared_ptr<Sensor> sensor);

    ~ManipulatorTravelDrive();


private:
    std::shared_ptr<Engine> engine;
    std::shared_ptr<Encoder> encoder;
    std::shared_ptr<Sensor> sensor;

};

#endif // MANIPULATORTRAVELDRIVE_H
