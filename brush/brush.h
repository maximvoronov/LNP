#ifndef BRUSH_H
#define BRUSH_H
#include <qglobal.h>
#include <idevice.h>

class Brush : public IDevice
{
public:
    Brush();
    ~Brush();
    enum class BRUSHMATERIAL { PLASTICK };



private:
};

#endif // BRUSH_H
