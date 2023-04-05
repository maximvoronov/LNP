#ifndef IBEARINGPROPERTY_H
#define IBEARINGPROPERTY_H
#include <qglobal.h>

class IBearingProperty
{
public:
    enum class BEARING { ROLLER, NIDDLE };
    virtual void setD(qreal D) = 0;
    virtual qreal getD() const = 0;

    virtual void setd(qreal d) = 0;
    virtual qreal getd() const = 0;

    virtual void setr(qreal r) = 0;
    virtual qreal getr() const = 0;

    virtual void setB(qreal B) = 0;
    virtual qreal getB() const = 0;

    virtual void setCr(qreal Cr) = 0;
    virtual qreal getCr() const = 0;

    virtual void setC0r(qreal C0r) = 0;
    virtual qreal getC0r() const = 0;

    virtual void setf0(qreal f0) = 0;
    virtual qreal getf0() const = 0;

    virtual void setType(QString type) = 0;
    virtual QString getType() const = 0;

    virtual void setSeries(QString series) = 0;
    virtual QString getSeries() const = 0;
};

#endif // IBEARINGPROPERTY_H
