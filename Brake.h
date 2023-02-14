#ifndef BRAKE_H
#define BRAKE_H

#endif // BRAKE_H
#include <QString>
#include <vector>

class Brake
{
    public:
    virtual void setName(QString name) = 0;
    virtual QString getName() const = 0;

    virtual void setModel(QString modal) = 0;
    virtual QString getModel() const = 0;

    virtual void setTorque(std::vector<qreal> torque, qreal value) = 0;
    virtual std::vector<qreal> getTorque()const = 0;

    virtual void setVoltage(std::vector<qreal> voltage, qreal value) = 0;
    virtual std::vector<qreal> getVoltage() const = 0;

    virtual void setWattage(std::vector<qreal> wattage, qreal value) = 0;
    virtual std::vector<qreal> getWattage() const = 0;

    virtual void setCurrent(std::vector<qreal> current, qreal value) = 0;
    virtual std::vector<qreal> getCurrent() const = 0;

    virtual void setRessistance(std::vector<qreal> ressistance, qreal value) = 0;
    virtual std::vector<qreal> getRessistance() const = 0;

    virtual void setMass(std::vector<qreal> mass, qreal value) = 0;
    virtual std::vector<qreal> getMass() const = 0;

    virtual void setRotationSpeed(std::vector<qint32> rotation_speed, qint32 value) = 0;
    virtual std::vector<qint32> getRotationSpeed() const = 0;


};
