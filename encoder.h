#ifndef ENCODER_H
#define ENCODER_H

#include <QString>
#include <sensor/sensor.h>
#include <sensor/ianglesensorproperty.h>
#include <sensor/iencoderproperty.h>

class Encoder : public Sensor, public IEncoderProperty, public IAngleSensorProperty
{
public:
    enum class EncoderType { DIFFERENTIVE };
    Encoder();
    ~Encoder();
    Q_DISABLE_COPY_MOVE(Encoder);

    /*EncoderProperty*/
    void setHoursWorkBeforeBrake(qreal hours) override;
    qreal getHoursWorkBeforeBrake()const override;

    void setTemperature(qreal temperature) override;
    qreal getTemperature() const override;

    void setOutputType(QString output_type) override;
    void setEncoderResolution(qint32 encoder_resolution) override;

    QString getOutputType() const override;
    qint32 getEncoderResolution() const override;

    /*IAngleSensorProperty*/
    void setMechanicalShock(qreal mechanicalshock) override;
    qreal getMechanicalShock() const override;

    void setRotationSpeed(qreal rotationspeed) override;
    qreal getRotationSpeed() const override;

    void setDistance(qreal distance) override;
    qreal getDistance() const override;

    void setDirection(qreal diraction) override;
    qreal getDirection() const override;

    void setPosition(qreal position) override;
    qreal getPosition() const override;

    void setInnerDiameter(qreal inner_diameter) = delete;
    qreal getInnerDiameter() const = delete;
    void setOuterDiameter(qreal outer_diameter) = delete;
    qreal getOuterDiameter() const = delete;

private:
    QString outputtype;
    qreal hours, inner_diameter, outer_diameter;
    qreal temperature, encoder_resolution;
    qreal mechanicalshock, rotationspeed, distance, direction, position;
};
#endif // ENCODER_H
