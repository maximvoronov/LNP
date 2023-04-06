#ifndef BRUSH_H
#define BRUSH_H
#include <qglobal.h>
#include <igeometry.h>
#include <QString>

class Brush : public IGeometry
{
public:
    Brush();
    virtual ~Brush();
    enum class BRUSHMATERIAL { PLASTICK, METALL };
    Q_DISABLE_COPY_MOVE(Brush);
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

#endif // BRUSH_H
