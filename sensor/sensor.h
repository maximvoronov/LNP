#ifndef SENSOR_H
#define SENSOR_H

#include <QThread>
#include <QString>
#include <idevice.h>
#include <icoil.h>
#include <sensor/isensorproperty.h>

class InfoWindow;
class Robot;
class ThermoBlock;
class Sensor : public IDevice, public ICoil, public ISensorProperty
{
public:
    friend class InfoWindow;
    friend class Robot;
    friend class ThermoBlock;
    enum class GasSensor : char { AIR, VACUUM, NITROGEN, OXYGEN };
    enum class SensorMesuaredParameterType : unsigned char { PRESSURE,
                                                             CONSUMPTION,
                                                             LEVEL,
                                                             TEMPERATURE,
                                                             CONCENTRATION,
                                                             RADIOACTIVITY,
                                                             MOVEMENT,
                                                             LOCATION,
                                                             PHOTO,
                                                             ANGLE,
                                                             VIBRATION,
                                                             MECH_VALUES,
                                                             HUMIDITY,
                                                             ARC_PROTECTION
                                                           };
    enum class SensorPrincipleType : unsigned char { FIBER_OPTIC,
                                                     OPTIC_SENSOR,
                                                     MAGNETOELECTRIC,
                                                     PIEZOELECTRIC,
                                                     STRAIN_GAUGE,
                                                     CAPACITIVE,
                                                     POTENTIOMETRIC,
                                                     INDUCTIVE };
    enum class SensorGroup : unsigned char { CHEMICAL, PHYSICAL };
    enum class SensorState : unsigned char { ON, OFF };

    Sensor();
    Sensor(QString Name, QString Brand, QString Protection, qreal Width, qreal Height, qreal Lenght,
           qreal Current, qreal Voltage, qreal Wattage, qreal Ressistance, qreal Working_Temperature,
           qreal Environment_Temperature, bool State);
    ~Sensor();
    Q_DISABLE_COPY_MOVE(Sensor);
    /*IDevice*/
    void setName(QString name) override;
    QString getName() const override;
    void setBrand(QString brand) override;
    QString getBrand() const override;
    void setWidth(qreal width) override;
    qreal getWidth() const override;
    void setHeight(qreal height) override;
    qreal getHeight() const override;
    void setLength(qreal lenght) override;
    qreal getLength() const override;
    void setMass(qreal mass) override;
    qreal getMass() const override;
    void setMaterial(QString material) override;
    QString getMaterial() const override;
    void setIP(QString ip) override;
    QString getIP() const override;
    /*ICoil*/
    void setCurrent(qreal current) override;
    qreal getCurrent() const override;
    void setVoltage(qreal voltage) override;
    qreal getVoltage() const override;
    void setWattage(qreal wattage) override;
    qreal getWattage() const override;
    void setRessistance(qreal ressistance) override;
    qreal getRessistance() const override;
    /*ISensorProperty*/
    QString getProtection() const override;
    void setProtection(QString protection) override;
    qreal getWorkingTemperature() const override ;
    void setWorkingTemperature(qreal working_temperature) override;
    qreal getEnvironmentTemperature() const override;
    void setEnvironmentTemperature(qreal environment_temperature) override;

    void setInnerDiameter(qreal inner_diameter);
    qreal getInnerDiameter() const;
    void setOuterDiameter(qreal outer_diameter);
    qreal getOuterDiameter() const;

    bool getState() const noexcept;
    void setState(bool state);
private:
    QString name, brand, protection, material, ip;
    qreal width, length, height, mass, inner_diameter, outer_diameter;
    qreal current, voltage, wattage, ressistance;
    qreal working_temperature, environment_temperature;
    bool state;
};

#endif // SENSOR_H
