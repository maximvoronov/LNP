#ifndef ENCODERPROPERTY_H
#define ENCODERPROPERTY_H
#include <qglobal.h>

class EncoderProperty
{
public:

    //virtual qreal getShaftSize() const = 0;
    //virtual void setShaftSize(qreal shaft_size) = 0;
    //virtual QString getKind() const = 0;
    //virtual void setKind(QString kind) = 0;

    enum EncoderType {DIFFERENTIVE = 240};

    virtual QString getOutputType() const = 0;
    virtual void setOutputType(QString output_type) = 0;
    virtual qint32 getEncoderResolution() const = 0;
    virtual void setEncoderResolution(qint32 encoder_resolution) = 0;
    virtual qreal getHoursWorkBeforeBrake() const = 0;
    virtual void setHoursWorkBeforeBrake(qreal hours) = 0;
    virtual void setTemperature(qreal temperature) = 0;
    virtual qreal getTemperature() const = 0;
};

#endif // ENCODERPROPERTY_H
