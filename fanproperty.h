#ifndef FANPROPERTY_H
#define FANPROPERTY_H
#include <qglobal.h>

class FanProperty
{
public:
    virtual qreal setRotationSpeed(qreal rotationspeed) = 0;
    virtual void getRotationSpeed() const = 0;
    virtual qreal setNoise(qreal noise) = 0;
    virtual void getNoise()const = 0;
    virtual ~FanProperty() = default;

};

#endif // FANPROPERTY_H
