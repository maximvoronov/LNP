#include "hillshademodule.h"
/*Модуль отмывки*/
HillShadeModule::HillShadeModule()
{

}
HillShadeModule::~HillShadeModule()
{

}

void HillShadeModule::setModuleTypeState(enum WASH module_type){
    /*выбран режим отмывки водой/раствором*/
    switch (module_type)
    {
        case WASH::HYDRO:
        break;
        case WASH::HYDRO_MECHANICAL:
        /*выбран режим отмывки с применением щетки*/
        break;
    default: break;
    }
}





