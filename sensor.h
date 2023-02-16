#ifndef SENSOR_H
#define SENSOR_H

#include <QString>
#include <device.h>
#include <coil.h>

class Sensor : public Device, public Coil
{
public:
    enum SensorType {THROUGH_BEAM_WITH_SLOT = 401};
    enum Mode_State { ON = 430, OFF};
    /*Device*/
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

    /*Coil*/
    void setCurrent(qreal current) override;
    qreal getCurrent() const override;
    void setVoltage(qreal voltage) override;
    qreal getVoltage() const override;
    void setWattage(qreal wattage) override;
    qreal getWattage() const override;
    void setRessistance(qreal ressistance) override;
    qreal getRessistance() const override;

    Sensor();
    ~Sensor();

private:
    QString name, brand;
    qreal width, length, height;
    qreal current, voltage, wattage, ressistance;
};

#endif // SENSOR_H
