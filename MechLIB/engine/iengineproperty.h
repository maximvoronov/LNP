#ifndef IENGINEPROPERTY_H
#define IENGINEPROPERTY_H
#include <qglobal.h>

class IEngineProperty
{
public:
    enum class ENGINE { PNEVMO, HYDRO };
    virtual qreal getShaftSize() const = 0;
    virtual void setShaftSize(qreal shaft_size) = 0;
    virtual qreal getTorque() const = 0;
    virtual void setTorque(qreal torque) = 0;
    virtual void setDiameter(qreal diameter) = 0;
    virtual qreal getDiameter() const = 0;
    virtual qreal getInercia() const = 0;    
    virtual void setInercia(qreal inercia) = 0;
    virtual quint32 getMotoHours() const = 0;
    virtual void setMotoHours(quint32) = 0;
};

#endif // IENGINEPROPERTY_H
