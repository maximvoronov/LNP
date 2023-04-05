#ifndef ENGINE_H
#define ENGINE_H

#include <idevice.h>
#include <icoil.h>
#include <engine/iengineproperty.h>
#include <QString>

class Engine : public IDevice, public ICoil, public IEngineProperty
{
public:
    Engine();
    ~Engine();
    Q_DISABLE_COPY_MOVE(Engine);
    void wattageEstimate(qreal current, qreal voltage) noexcept;
    qreal getInnerDiameter() const;
    void setInnerDiameter(qreal inner_diameter);
    qreal getOuterDiameter() const;
    void setOuterDiameter(qreal outer_diameter);

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
    qreal getCurrent() const override;
    void setVoltage(qreal voltage) override;
    qreal getVoltage() const override;
    void setWattage(qreal wattage) override;
    qreal getWattage() const override;
    void setRessistance(qreal ressistance) override;
    qreal getRessistance() const override;
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
    //Bearing *bearing = nullptr;
    QString name, brand, material, ip;
    qreal width, length, height, mass;
    qreal current, voltage, wattage, ressistance;
    qreal torque, inercia, diameter, shaftsize;
    qreal inner_diameter, outer_diameter;
    qint32 motohours;
};

#endif // ENGINE_H
