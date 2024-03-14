#ifndef BEARING_H
#define BEARING_H
#include <MechLIB/object/igeometry.h>
#include <MechLIB/bearing/ibearingproperty.h>
#include <QString>

class Bearing : public IGeometry, public IBearingProperty
{
public:
    Bearing();
    Bearing(qreal B, qreal D,
            qreal d, qreal r,
            qreal f0, qreal Cr,
            qreal C0r, qreal mass,
            QString type,
            QString name, QString brand, QString series);
    /*IDevice*/

    void setMass(qreal mass) override;
    qreal getMass() const override;

    void setName(QString name) override;
    QString getName() const override;

    void setIP(QString ip) override;
    QString getIP() const override;

    void setBrand(QString brand) override;
    QString getBrand() const override;

    void setMaterial(QString material) override;
    QString getMaterial() const override;

    qreal getWidth() const override;
    void setWidth(qreal width) override;

    qreal getLength() const override;
    void setLength(qreal lenght) override;

    qreal getHeight() const override;
    void setHeight(qreal height) override;

    qreal getInnerDiameter() const;
    void setInnerDiameter(qreal inner_diameter);

    qreal getOuterDiameter() const;
    void setOuterDiameter(qreal outer_diameter);

    /*IBearingProperty*/
    void setB(qreal B) override;
    qreal getB() const override;

    void setD(qreal D) override;
    qreal getD() const override;

    void setd(qreal d) override;
    qreal getd() const override;

    void setr(qreal r) override;
    qreal getr() const override;

    void setf0(qreal f0) override;
    qreal getf0() const override;

    void setCr(qreal Cr) override;
    qreal getCr() const override;

    void setC0r(qreal C0r) override;
    qreal getC0r() const override;

    void setType(QString type) override;
    QString getType() const override;

    void setSeries(QString series) override;
    QString getSeries() const override;

    Q_DISABLE_COPY(Bearing);

private:
    qreal B, D, d, r, f0, Cr, C0r;
    qreal length, width, height, mass, outer_diameter, inner_diameter;
    QString name, type, series, brand, material, ip;
};

#endif // BEARING_H
