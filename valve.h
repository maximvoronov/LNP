#ifndef VALVE_H
#define VALVE_H
#include <qglobal.h>
#include <device.h>
#include <valveproperty.h>

class Valve : public Device, public ValveProperty
{
public:
    Valve();
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

    /*ValveProperty*/
    void setFitting(QString fitting) override;
    QString getFitting() const override;
    void setConsumption(qreal consumption) override;
    qreal getConsumption() const override;
    void setTemperature(qreal temperature) override;
    qreal getTemperature() const override;

private:
    QString name, brand, fitting;
    qreal width, length, height, consumption, temperature;

};

#endif // VALVE_H
