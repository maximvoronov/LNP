#ifndef VERTICALDRIVE_H
#define VERTICALDRIVE_H
#include <sensor/sensor.h>
#include <brake/brake.h>
#include <encoder.h>
#include <engine/engine.h>

class Robot;
/*Привод вертикального перемещения*/
class VerticalDrive
{
public:
    enum class DriveMode { DRIVE_ON, DRIVE_OFF };
    enum class SensorEvents { SENSOR_CURRENT, SENSOR_VOLTAGE, SENSOR_WATTAGE, SENSOR_RESSISTANCE };
    enum class BrakeEvents { BRAKE_TORQUE, BRAKE_ROTATION_SPEED };
    enum class EncoderEvents { ENCODER_RESOLUTION, ENCODER_TEMPERATURE, ENCODER_HOURS_OF_WORK };
    enum class EngineEvents { ENGINE_CURRENT, ENGINE_VOLTAGE, ENGINE_WATTAGE, ENGINE_RESSISTANCE, ENGINE_TORQUE, ENGINE_INERCIA };
    friend class Robot;
    VerticalDrive();/*default 0*/
    VerticalDrive(std::shared_ptr<Brake> brake,
                  std::shared_ptr<Encoder> encoder,
                  std::shared_ptr<Engine> engine);
    Q_DISABLE_COPY_MOVE(VerticalDrive);
    bool readSensor(Sensor& sensor);
    bool readBrake(Brake& brake);
    bool readEngine(Engine& engine);
    bool readEncoder(Encoder& encoder);

    bool updateDataEncoder(enum EncoderEvents encoder_events, qreal value);
    bool updateDataBrake(enum BrakeEvents brake_events, qreal value);
   // bool updateDataEngine(enum EngineEvents engine_events, qreal value);
    bool init();
    ~VerticalDrive();
private:
    std::shared_ptr<Brake> brake;
    std::shared_ptr<Encoder> encoder[3];
    std::shared_ptr<Engine> engine;
};

#endif // VERTICALDRIVE_H
