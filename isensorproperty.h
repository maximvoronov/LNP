#ifndef SENSORPROPERTY_H
#define SENSORPROPERTY_H
#include <qglobal.h>

class ISensorProperty
{
public:
    enum SensorType{ AIR, VACUUM, NITROGEN };

    virtual qreal getDeep() const = 0;
    virtual void setDeep(qreal deep) = 0;







};

#endif // SENSORPROPERTY_H
