#ifndef IVALVEPROPERTY_H
#define IVALVEPROPERTY_H

#include <QString>

class IValveProperty
{
public:
    virtual QString getFitting() const = 0;
    virtual void setFitting(QString fitting) = 0;
    virtual qreal getConsumption() const = 0;
    virtual void setConsumption(qreal consumption) = 0;
    virtual qreal getTemperature() const = 0;
    virtual void setTemperature(qreal temperature) = 0;
};

#endif // IVALVEPROPERTY_H
