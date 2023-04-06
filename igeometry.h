#ifndef IGEOMETRY_H
#define IGEOMETRY_H
#include <qglobal.h>

class IGeometry
{
public:
    enum class STATE {ON, OFF};
    virtual QString getName()  const = 0;
    virtual void setName(QString name) = 0;

    virtual QString getBrand() const = 0;
    virtual void setBrand(QString brand) = 0;

    virtual void setLength(qreal lenght) = 0;
    virtual qreal getLength() const = 0;

    virtual void setWidth(qreal width) = 0;
    virtual qreal getWidth() const = 0;

    virtual void setHeight(qreal height) = 0;
    virtual qreal getHeight() const = 0;
    virtual void setMass(qreal mass) = 0;
    virtual qreal getMass() const = 0;

    virtual void setMaterial(QString material) = 0;
    virtual QString getMaterial() const = 0;

    virtual void setIP(QString ip) = 0;
    virtual QString getIP() const = 0;
};

#endif // IGEOMETRY_H
