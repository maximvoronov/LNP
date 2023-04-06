#ifndef ISERVOPROPERTY_H
#define ISERVOPROPERTY_H
#include <qglobal.h>

class IServoProperty
{
public:
    IServoProperty();
    virtual qreal getMoment() const = 0;
    virtual void setMoment() = 0;

};

#endif // ISERVOPROPERTY_H
