#ifndef ENGINE_H
#define ENGINE_H

#include <idevice.h>
#include <icoil.h>
#include <iengineproperty.h>
#include <QString>
#include <bearing.h>


class Engine : public IDevice, public ICoil, public IEngineProperty
{
public:
    enum class EngineState{ ON, OFF };
    enum class EngineType{ PNEVMO, HYDRO };
    Engine();
    ~Engine();
    Engine& operator=(const Engine&) = delete;
    Engine(const Engine&) = delete;
    void wattageEstimate(qreal current, qreal voltage) noexcept;
    /*IDevice*/
    void setName(QString name) override;
    QString getName() const override;
    void setBrand(QString brand) override;
    QString getBrand() const override;
    void setWidth(qreal width) override;
    qreal getWidth() const override;
    void setHeight(qreal height) override;
    qreal getHeight() const override;
    void setLength(qreal lenght) override;
    qreal getLength() const override;
    /*ICoil*/
    void setCurrent(qreal current) override;
    qreal getCurrent() const override;
    void setVoltage(qreal voltage) override;
    qreal getVoltage() const override;

    qreal getWattage() const override;
    void setRessistance(qreal ressistance) override;
    qreal getRessistance() const override;
    /*IEngineProperty*/
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
    Bearing *bearing = nullptr;
    QString name, brand;
    qreal width, length, height;
    qreal current, voltage, wattage, ressistance;
    qreal torque, inercia, diameter, shaftsize;
    qint32 motohours;
};

#endif // ENGINE_H
