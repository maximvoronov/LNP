#include "preparationmodule.h"

PreparationModule::PreparationModule(){
    state_name = "";
    supply_name = "";
    valve = std::make_shared<Valve>();
    pump = std::make_shared<Pump>();
    valve->setIP("IP67");
    pump->setIP("IP65");
}
PreparationModule::PreparationModule(std::shared_ptr<Valve> valve, std::shared_ptr<Pump> pump, QString state_name, QString supply_name)
{
    state_name = "";
    supply_name = "";
    valve = std::make_shared<Valve>();
    pump = std::make_shared<Pump>();
    valve->setIP("IP67");
    pump->setIP("IP65");

}
PreparationModule::~PreparationModule()
{
}
bool PreparationModule::getState() const noexcept{
    return this->state;
}
void PreparationModule::setState(bool state) noexcept{
    this->state = state;
}

void PreparationModule::setStateName(QString state_name) noexcept{
    this->state_name = state_name;
}
QString PreparationModule::getStateName() const noexcept{
    return this->state_name;
}

void PreparationModule::setSupplyName(QString supply_name) noexcept{
    this->supply_name = supply_name;
}
QString PreparationModule::getSupplyName() const noexcept{
    return this->supply_name;
}
bool PreparationModule::checkState(enum STATE state){
    switch(state){
    case STATE::ON:
    {
        this->setState(true);
        this->setStateName("Включено");
        break;
    }
    return true;
    case STATE::OFF:
    {
        this->setState(false);
        this->setStateName("Не включено");
    break;
    }
        return true;
    }
    return false;
}

