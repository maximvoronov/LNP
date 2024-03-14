#ifndef CHEMICALBLOCK_H
#define CHEMICALBLOCK_H
#include <MechLIB/object/igeometry.h>
#include <qthread.h>
/*Модуль подготовки подачи растворов*/
class QThread;
class ChemicalBlock : public IGeometry
{
public:
    ChemicalBlock();
    ~ChemicalBlock();
    enum class SOLUTION{ PVA_PAC, PVA_H202, H202, PVA_PAC_H2O2 };
    void setMass(qreal mass) override;
    qreal getMass() const override;
    void setName(QString name) override;
    QString getName() const override;
    void setBrand(QString brand) override;
    QString getBrand() const override;
    qreal getWidth() const override;
    void setWidth(qreal width) override;
    qreal getHeight() const override;
    void setHeight(qreal height) override;
    qreal getLength() const override;
    void setLength(qreal length) override;
    QString getMaterial() const override;
    void setMaterial(QString material) override;

    bool selectReciept();
    bool reactives();

private:
    bool flag;
    qreal mass, width, height, length;
    QString material, brand, name;
};

#endif // CHEMICALBLOCK_H
