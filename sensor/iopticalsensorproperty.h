#ifndef IOPTICALSENSORPROPERTY_H
#define IOPTICALSENSORPROPERTY_H
#include <qglobal.h>

class IOpticalSensorProperty
{
public:
    enum class SensorType : unsigned char { THROW_BEAM_WITH_SLOT };
    enum class LIGHT { ON, OFF };
    virtual qreal getDeep() const = 0;
    virtual void setDeep(qreal deep) = 0;
};

#endif // IOPTICALSENSORPROPERTY_H
