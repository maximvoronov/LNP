#ifndef VALVE_H
#define VALVE_H
#include <qglobal.h>
#include <igeometry.h>
#include <valve/ivalveproperty.h>

class Valve : public IGeometry, public IValveProperty
{
public:
    enum class ValveType{ DIRRECT, INDIRRECT };
    Valve();
    ~Valve();
    Q_DISABLE_COPY_MOVE(Valve);
    /*Device*/
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
    void setMass(qreal mass) override;
    qreal getMass() const override;
    void setMaterial(QString material) override;
    QString getMaterial() const override;
    void setIP(QString ip) override;
    QString getIP() const override;
    /*ValveProperty*/
    void setFitting(QString fitting) override;
    QString getFitting() const override;
    void setConsumption(qreal consumption) override;
    qreal getConsumption() const override;
    void setTemperature(qreal temperature) override;
    qreal getTemperature() const override;
private:
    QString name, brand, fitting, ip;
    qreal mass;
    QString material;
    qreal width, length, height, consumption, temperature;
};

#endif // VALVE_H
