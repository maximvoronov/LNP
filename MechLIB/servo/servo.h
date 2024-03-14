#ifndef SERVO_H
#define SERVO_H
#include <MechLIB/object/igeometry.h>
#include <MechLIB/object/ikinematic.h>
#include <QString>

class Servo : public IGeometry, public IKinematic
{
public:
    Servo();
    virtual ~Servo();
    Q_DISABLE_COPY(Servo);
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
    /*IKinematic*/
    void setTorque(qreal torque) override;
    qreal getTorque() const override;
    void setInercia(qreal inercia) override;
    qreal getInercia() const override;
    void setDiameter(qreal diameter) override;
    qreal getDiameter() const override;
    void setShaftSize(qreal shaft_size) override;
    qreal getShaftSize() const override;
    void setMotoHours(quint32 moto_hours) override;
    quint32 getMotoHours() const override;

private:
    QString name, brand, material, ip;
    qreal height, width, length, mass;
    /*IKinematic*/
    qreal torque, inercia, diameter, shaftsize;
    qint32 motohours;
};

#endif // SERVO_H
