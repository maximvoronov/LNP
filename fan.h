#ifndef FAN_H
#define FAN_H
#include <device.h>
#include <coil.h>
#include <QString>

class Fan : public Device, public Coil
{
public:
    Fan();
    /*Device*/
    void setName(QString name) override;
    void setBrand(QString brand) override;
    void setWidth(qreal width) override;
    void setHeight(qreal height) override;
    void setLength(qreal lenght) override;
    QString getName() const override;
    QString getBrand() const override;
    qreal getWidth() const override;
    qreal getHeight() const override;
    qreal getLength() const override;
    /*Coil*/
    void setCurrent(qreal current) override;
    void setVoltage(qreal voltage) override;
    void setWattage(qreal wattage) override;
    void setRessistance(qreal ressistance) override;
    qreal getCurrent() const override;
    qreal getVoltage() const override;
    qreal getWattage() const override;
    qreal getRessistance() const override;

private:
    QString name, brand;
    qreal height, width, lenght, hours;
    qreal current, voltage, wattage, ressistance, temperature, encoder_resolution;
};

#endif // FAN_H
