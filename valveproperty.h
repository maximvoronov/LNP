#ifndef VALVEPROPERTY_H
#define VALVEPROPERTY_H

#include <QString>

class ValveProperty
{
public:
    enum ValveType{DIRRECT = 235, INDIRRECT };
    virtual QString getFitting() const = 0;
    virtual void setFitting(QString fitting) = 0;
    virtual qreal getConsumption() const = 0;
    virtual void setConsumption(qreal consumption) = 0;
    virtual qreal getTemperature() const = 0;
    virtual void setTemperature(qreal temperature) = 0;


};

#endif // VALVEPROPERTY_H
