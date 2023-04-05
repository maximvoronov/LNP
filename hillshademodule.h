#ifndef HILLSHADEMODULE_H
#define HILLSHADEMODULE_H
#include <idevice.h>
/*Модуль отмывки*/
class HillShadeModule: public IDevice
{
public:
    enum class WASH { HYDRO, HYDRO_MECHANICAL };
    HillShadeModule();
    ~HillShadeModule();

    bool checkProcessStatus();
    bool checkVacuum();
    bool checkWater();
    void setModuleTypeState(enum WASH module_type);
    bool checkMaterial();

private:


};

#endif // HILLSHADEMODULE_H
