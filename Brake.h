#ifndef BRAKE_H
#define BRAKE_H
#include "device.h"
#include <QString>

class Brake : public Device
{
public:
    Brake();
    ~Brake();
    void setTorque(qreal torque);
    qreal getTorque()const;
    void setRotationSpeed(qint32 rotation_speed);
    qint32 getRotationSpeed() const;
    void setName(QString name) override;
    void setWidth(qreal width) override;
    void setBrand(QString brand) override;
    void setHeight(qreal height) override;
    void setLength(qreal lenght) override;
    QString getName() const override;
    QString getBrand() const override;
    qreal getWidth() const override;
    qreal getHeight() const override;
    qreal getLength() const override;
private:
    Brake(const Brake&) = delete;
    void operator=(const Brake&) = delete;
private:
    qreal torque, width, length, height;
    qint32 rotation_speed;
    QString name, brand;
};
#endif // BRAKE_H
