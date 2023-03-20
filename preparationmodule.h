#ifndef PREPARATIONMODULE_H
#define PREPARATIONMODULE_H
#include <valve.h>
#include <thread>
class PreparationModule
{
public:
    PreparationModule(std::shared_ptr<Valve> valve, QString state_name, QString supply_name);
    ~PreparationModule();
    enum class SUPPLY : unsigned char { SYNC, ASYNC, SUCCESSIVELY };
    enum class STATE { ON, OFF };
    bool checkState(enum STATE);

    void setState(bool state) noexcept;
    bool getState() const noexcept;

    void setStateName(QString state_name) noexcept;
    QString getStateName() const noexcept;

    void setSupplyName(QString supply_name) noexcept;
    QString getSupplyName() const noexcept;

private:
    bool state;
    std::shared_ptr<Valve> valve_l;
    QString state_name, supply_name;
};

#endif // PREPARATIONMODULE_H
