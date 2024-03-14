#ifndef IANGLESENSORPROPERTY_H
#define IANGLESENSORPROPERTY_H
#include <qglobal.h>

class IAngleSensorProperty
{
public:
    enum class ANGLETYPE : unsigned char { ABSOLUTE, INCREMENTAL, OPTICAL };
    enum class OPTICALSENSORTYPE : unsigned char { ELECTRIC, MAGNETIC };

    /*Mechanical Tests*/
    virtual void setMechanicalShock(qreal mechanicalshock) = 0;
    virtual qreal getMechanicalShock() const = 0;

    ///Messuared Parameters///
    /*Rotational speed*/
    virtual qreal getRotationSpeed() const = 0;
    virtual void setRotationSpeed(qreal rotationspeed) = 0;

    /*Distance (length)*/
    virtual qreal getDistance() const = 0;
    virtual void setDistance(qreal distance) = 0;

    /*Direction of rotation*/
    virtual qreal getDirection() const = 0;
    virtual void setDirection(qreal direction) = 0;

    /*Angular position in relation to the zero mark.*/
    virtual qreal getPosition() const = 0;
    virtual void setPosition(qreal position) = 0;
};

#endif // IANGLESENSORPROPERTY_H
