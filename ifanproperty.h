#ifndef IFANPROPERTY_H
#define IFANPROPERTY_H
#include <qglobal.h>

class IFanProperty
{
public:
    virtual qreal setRotationSpeed(qreal rotationspeed) = 0;
    virtual void getRotationSpeed() const = 0;
    virtual void setNoise(qreal noise) = 0;
    virtual qreal getNoise()const = 0;
};

#endif // IFANPROPERTY_H
