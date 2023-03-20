#ifndef IPUMPPROPERTY_H
#define IPUMPPROPERTY_H
#include <qglobal.h>

class IPumpProperty
{
public:
    virtual qreal getFlowRange() const = 0;
    virtual void setFlowRange(qreal flowrange) = 0;

    virtual qreal getSpeedRange() const = 0;
    virtual void setSpeedRange(qreal speedrange) = 0;

    virtual qreal getSpeedAccuracy() const = 0;
    virtual void setSpeedAccuracy(qreal speedaccuracy) = 0;

    virtual qreal getSpeedResolution() const = 0;
    virtual void setSpeedResolution(qreal speedresolution) = 0;
};

#endif // IPUMPPROPERTY_H
