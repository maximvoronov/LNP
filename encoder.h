#ifndef ENCODER_H
#define ENCODER_H

#include <QString>
#include <vector>

class Encoder
{
public:

    virtual qreal getShaftSize() const = 0;
    virtual void setShaftSize(qreal shaft_size) = 0;

    virtual QString getKind() const = 0;
    virtual void setKind(QString kind) = 0;

    virtual QString getOutputType() const = 0;
    virtual void setOutputType(QString output_type) = 0;

    virtual qint32 getEncoderResolution() const = 0;
    virtual void setEncoderResolution(qint32 encoder_resolution) = 0;
};

#endif // ENCODER_H
