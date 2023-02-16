#ifndef FL_H
#define FL_H

#include <device.h>
#include <Coil.h>

class FL : public Device
{
public:
    FL();
    ~FL();
    void setName(QString name) override;
    QString getName() const override;
    void setWidth(qreal width) override;
    qreal getWidth() const override;
    void setHeight(qreal height) override;
    qreal getHeight() const override;
    void setLength(qreal lenght) override;
    qreal getLength() const override;
    QString getBrand() const override;
    void setBrand(QString brand) override;

private:
    const QString name = "FL60STH86-2008BF", brand = "StepMotor";
    qreal mass, length, height, width;

};

#endif // FL_H
