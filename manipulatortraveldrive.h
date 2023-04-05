#ifndef MANIPULATORTRAVELDRIVE_H
#define MANIPULATORTRAVELDRIVE_H
#include <QThread>
#include <sensor/sensor.h>
#include <engine/engine.h>
#include <fan/fan.h>
#include <encoder.h>

class Robot;
class ManipulatorTravelDrive
{
public:
    ManipulatorTravelDrive(std::shared_ptr<Engine> engine,
                           std::shared_ptr<Encoder> encoder,
                           std::shared_ptr<Sensor> sensor);
    ~ManipulatorTravelDrive();
    friend class Robot;
    Q_DISABLE_COPY_MOVE(ManipulatorTravelDrive);

private:
    std::shared_ptr<Engine> engine;
    std::shared_ptr<Encoder> encoder;
    std::shared_ptr<Sensor> sensor;

};

#endif // MANIPULATORTRAVELDRIVE_H
