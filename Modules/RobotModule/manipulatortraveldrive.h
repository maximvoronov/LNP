#ifndef MANIPULATORTRAVELDRIVE_H
#define MANIPULATORTRAVELDRIVE_H
#include <QThread>
#include <MechLIB/sensor/sensor.h>
#include <MechLIB/engine/engine.h>
#include <MechLIB/fan/fan.h>

class Robot;
class ManipulatorTravelDrive
{
public:
    ManipulatorTravelDrive(std::shared_ptr<Engine> engine,
  //                         std::shared_ptr<Encoder> encoder,
                           std::shared_ptr<Sensor> sensor);
    ~ManipulatorTravelDrive();
    friend class Robot;
    Q_DISABLE_COPY(ManipulatorTravelDrive);

private:
    std::shared_ptr<Engine> engine;
    //std::shared_ptr<Encoder> encoder;
    std::shared_ptr<Sensor> sensor;

};

#endif // MANIPULATORTRAVELDRIVE_H
