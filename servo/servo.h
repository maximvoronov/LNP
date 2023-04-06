#ifndef SERVO_H
#define SERVO_H
#include <igeometry.h>
#include <QString>


class Servo : public IGeometry
{
public:
    Servo();
    virtual ~Servo();
    /*IDevice*/
    void setMass(qreal mass) override;
    qreal getMass() const override;
    void setName(QString name) override;
    QString getName() const override;
    void setBrand(QString brand) override;
    QString getBrand() const override;
    void setWidth(qreal width) override;
    qreal getWidth() const override;
    void setHeight(qreal height) override;
    qreal getHeight() const override;
    void setLength(qreal length) override;
    qreal getLength() const override;
    void setMaterial(QString material) override;
    QString getMaterial() const override;
    void setIP(QString ip) override;
    QString getIP() const override;
    /*IServoProperty*/

private:
    QString name, brand, material, ip;
    qreal height, width, length, mass;
    /*IServoProperty*/
    qreal moment;
};

#endif // SERVO_H
