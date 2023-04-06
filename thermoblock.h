#ifndef THERMOBLOCK_H
#define THERMOBLOCK_H
#include <igeometry.h>
#include <mechmovepushers.h>
/*Блок термообработки*/
class ThermoBlock
{
public:
    ThermoBlock();
    ~ThermoBlock();
    Q_DISABLE_COPY_MOVE(ThermoBlock);
private:
    std::unique_ptr<MechMovePushers> mechmovepushers;
};

#endif // THERMOBLOCK_H
