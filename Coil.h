#ifndef COIL_H
#define COIL_H

#endif // COIL_H
#include <vector>
#include <QString>

class Coil
{
    virtual void setVoltage(qreal voltage) = 0;
    virtual qreal getVoltage() const = 0;

    virtual void setRessistance(qreal ressistance) = 0;
    virtual qreal getRessistance() const = 0;

    virtual void setCurrent(qreal current) = 0;
    virtual qreal getCurrent() const = 0;

    virtual void setWattage(qreal wattage) = 0;
    virtual qreal getWattage() const = 0;

};
