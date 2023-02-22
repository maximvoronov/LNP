#ifndef ENGINE_H
#define ENGINE_H

#include <device.h>
#include <coil.h>
#include <engineproperty.h>
#include <QString>

class Engine : public Device, public Coil, public EngineProperty
{
public:
    Engine();
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
    /*EngineProperty*/
    void setTorque(qreal torque) override;
    qreal getTorque() const override;
    void setInercia(qreal inercia) override;
    qreal getInercia() const override;
    void setDiameter(qreal diameter) override;
    qreal getDiameter() const override;
    void setShaftSize(qreal shaft_size) override;
    qreal getShaftSize() const override;
private:
    QString name, brand;
    qreal width, length, height;
    qreal current, voltage, wattage, ressistance;
    qreal torque, inercia, diameter, shaftsize;
};

#endif // ENGINE_H
