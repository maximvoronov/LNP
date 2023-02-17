#ifndef ENGINEPROPERTY_H
#define ENGINEPROPERTY_H
#include <qglobal.h>

class EngineProperty
{
public:
    enum EngineState{ON = 500, OFF};
    enum EngineType{PNEVMO = 503};
    virtual qreal getShaftSize() const = 0;
    virtual void setShaftSize(qreal shaft_size) = 0;
    virtual qreal getTorque() const = 0;
    virtual void setTorque(qreal torque) = 0;
    virtual void setDiameter(qreal diameter) = 0;
    virtual qreal getDiameter() const = 0;
    virtual qreal getInercia() const = 0;
    virtual void setInercia(qreal inercia) = 0;
};

#endif // ENGINEPROPERTY_H
