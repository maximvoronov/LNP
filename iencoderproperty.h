#ifndef IENCODERPROPERTY_H
#define IENCODERPROPERTY_H
#include <qglobal.h>

class IEncoderProperty
{
public:
    virtual QString getOutputType() const = 0;
    virtual void setOutputType(QString output_type) = 0;
    virtual qint32 getEncoderResolution() const = 0;
    virtual void setEncoderResolution(qint32 encoder_resolution) = 0;
    virtual qreal getHoursWorkBeforeBrake() const = 0;
    virtual void setHoursWorkBeforeBrake(qreal hours) = 0;
    virtual void setTemperature(qreal temperature) = 0;
    virtual qreal getTemperature() const = 0;
};

#endif // IENCODERPROPERTY_H
