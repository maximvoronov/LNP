#ifndef PUMP_H
#define PUMP_H

#include <idevice.h>
#include <QString>

class Pump : public IDevice
{
public:
    Pump();
    ~Pump();
    Q_DISABLE_COPY_MOVE(Pump);
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
private:
    QString name, brand, material, ip;
    qreal height, width, length, mass;
};

#endif // PUMP_H
