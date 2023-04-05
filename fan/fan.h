#ifndef FAN_H
#define FAN_H
#include <idevice.h>
#include <icoil.h>
#include <fan/ifanproperty.h>
#include <QString>
#include <QPixmap>

class Fan : public IDevice, public ICoil, public IFanProperty
{
public:
    Fan();
    void setMass(qreal mass) override;
    qreal getMass() const override;
    void setName(QString name) override;
    QString getName() const override;
    void setBrand(QString brand) override;
    QString getBrand() const override;
    void setMaterial(QString material) override;
    QString getMaterial() const override;
    void setHeight(qreal height) override;
    qreal getHeight() const override;
    void setWidth(qreal width) override;
    qreal getWidth() const override;
    void setLength(qreal lenght) override;
    qreal getLength() const override;

    void setIP(QString ip) override;
    QString getIP() const override;

    /*ICoil*/
    void setCurrent(qreal current) override;
    void setVoltage(qreal voltage) override;
    void setWattage(qreal wattage) override;
    void setRessistance(qreal ressistance) override;
    qreal getCurrent() const override;
    qreal getVoltage() const override;
    qreal getWattage() const override;
    qreal getRessistance() const override;
    /*IFanProperty*/
    qreal getNoise() const override;
    void setNoise(qreal noise) override;
    Q_DISABLE_COPY_MOVE(Fan);

private:
    QString name, brand, ip;
    qreal height, lenght, width, mass;
    qreal hours;
    qreal current, voltage, wattage, ressistance, temperature, noise;
    QPixmap *picture;
};

#endif // FAN_H
