#ifndef BXW_H
#define BXW_H

#include "Brake.h"
#include "device.h"
#include <Coil.h>

class BXW : public Device, public Coil, public Brake
{
public:
    BXW();
    ~BXW();

    void setName(QString name) override;
    QString getName() const override;

    void setMass(qreal mass);
    qreal getMass() const;

    void setBrand(QString brand) override;
    QString getBrand() const override;

    void setTorque(qreal torque) override;
    qreal getTorque() const override;

    void setCurrent(qreal current) override;
    qreal getCurrent() const override;
    void setVoltage(qreal voltage) override;
    qreal getVoltage() const override;
    void setWattage(qreal wattage) override;
    qreal getWattage() const override;

    void setRessistance(qreal ressistance) override;
    qreal getRessistance() const override;

    qint32 getRotationSpeed() const override;
    void setRotationSpeed(qint32 rotation_speed) override;

    void setWidth(qreal width) override;
    void setHeight(qreal height) override;
    void setLength(qreal lenght) override;

    qreal getWidth() const override;
    qreal getHeight() const override;
    qreal getLength() const override;

private:
    QString name, brand;
    qreal torque, current, voltage, wattage, ressistance;
    qint32 rotasion_speed;
    qreal mass, length, height, width;
};

#endif // BXW_H
