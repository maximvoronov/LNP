#ifndef ENGINE_H
#define ENGINE_H

#include <device.h>
#include <coil.h>
#include <QString>

class Engine : public Device, public Coil
{
public:
    Engine();

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

    void setCurrent(qreal current) override;
    qreal getCurrent() const override;
    void setVoltage(qreal voltage) override;
    qreal getVoltage() const override;
    void setWattage(qreal wattage) override;
    qreal getWattage() const override;
    void setRessistance(qreal ressistance) override;
    qreal getRessistance() const override;


private:
    QString name, brand;
    qreal width, length, height;
    qreal current, voltage, wattage, ressistance;


};

#endif // ENGINE_H
