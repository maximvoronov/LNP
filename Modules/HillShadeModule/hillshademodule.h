#ifndef HILLSHADEMODULE_H
#define HILLSHADEMODULE_H
#include <MechLIB/object/igeometry.h>
/*Модуль отмывки*/
class HillShadeModule: public IGeometry
{
public:
    enum class WASH { HYDRO, HYDROMECHANICAL };
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
