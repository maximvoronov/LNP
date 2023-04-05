#ifndef BXW_H
#define BXW_H
#include <brake/brake.h>
#include <QByteArray>

class BXW : public Brake
{
public:
    BXW();
    ~BXW();
    void setInnerDiameter(qreal inner_diameter) = delete;
    qreal getInnerDiameter() const = delete;
    void setOuterDiameter(qreal outer_diameter) = delete;
    qreal getOuterDiameter() const = delete;


    bool updateData(enum BRAKECATEGORIES, QByteArray& ba);
private:
    bool state;
};

#endif // BXW_H
