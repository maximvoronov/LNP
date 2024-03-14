#ifndef ISENSORPROPERTY_H
#define ISENSORPROPERTY_H
#include <qglobal.h>

class ISensorProperty
{
public:
    virtual QString getProtection()  const = 0;
    virtual void setProtection(QString protection) = 0;
    virtual qreal getEnvironmentTemperature() const = 0;
    virtual void setEnvironmentTemperature(qreal environment_temperature) = 0;
    virtual qreal getWorkingTemperature() const = 0;
    virtual void setWorkingTemperature(qreal working_temperature) = 0;
};

#endif // ISENSORPROPERTY_H
