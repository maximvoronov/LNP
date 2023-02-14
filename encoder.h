#ifndef ENCODER_H
#define ENCODER_H

#include <QString>
#include <exception.h>

class Encoder
{
public:
    virtual QString getName() const = 0;
    virtual void setName(QString name) = 0;

    virtual std::vector<qreal> getSupplyVoltage() const = 0;
    virtual void setSupplyVoltage(std::vector<qreal> voltage, qreal value) = 0;

    virtual std::vector<qreal> getShaftSize() const = 0;
    virtual void setShaftSize(std::vector<qreal> shaft_size, qreal value) = 0;

    virtual QString getOutputType() const = 0;
    virtual void setOutputType(QString output_type) = 0;

    virtual QString getBrand() const = 0;
    virtual void setBrand(QString brand) = 0;

    virtual std::vector<qint32> getEncoderResolution() const = 0;
    virtual void setEncoderResolution(std::vector<qint32> encoder_resolution, qint32 value) = 0;

    //virtual bool ShowEncoderMessage();

private:
    //QString message;

};

#endif // ENCODER_H
