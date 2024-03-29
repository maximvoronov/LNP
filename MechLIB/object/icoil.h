#ifndef ICOIL_H
#define ICOIL_H

#include <qglobal.h>

class ICoil
{
public:
    virtual void setVoltage(qreal voltage) = 0;
    virtual qreal getVoltage() const = 0;

    virtual void setRessistance(qreal ressistance) = 0;
    virtual qreal getRessistance() const = 0;

    virtual void setCurrent(qreal current) = 0;
    virtual qreal getCurrent() const = 0;

    virtual void setWattage(qreal wattage) = 0;
    virtual qreal getWattage() const = 0;
};

#endif // ICOIL_H
