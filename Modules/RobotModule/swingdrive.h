#ifndef SWINGDRIVE_H
#define SWINGDRIVE_H
#include <QThread>
#include <MechLIB/sensor/sensor.h>
//#include <encoder.h>
#include <MechLIB/engine/engine.h>

class Robot;
class SwingDrive
{
public:
    friend class Robot;
    SwingDrive();
    SwingDrive(std::shared_ptr<Sensor> sensor,
               //std::shared_ptr<Encoder> encoder,
               std::shared_ptr<Engine> engine);
    ~SwingDrive();
    Q_DISABLE_COPY(SwingDrive);
    const QString getName() const;

private:
    std::shared_ptr<Sensor> sensor;
    //std::shared_ptr<Encoder> encoder;
    std::shared_ptr<Engine> engine;
    const QString name = "Привод поворота";
};

#endif // SWINGDRIVE_H
