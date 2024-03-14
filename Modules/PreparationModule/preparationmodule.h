#ifndef PREPARATIONMODULE_H
#define PREPARATIONMODULE_H
#include <MechLIB/valve/valve.h>
#include <MechLIB/pump/pump.h>
#include <thread>
class PreparationModule
{
public:
    PreparationModule();
    PreparationModule(std::shared_ptr<Valve> valve, std::shared_ptr<Pump> pump, QString state_name, QString supply_name);
    ~PreparationModule();
    //Q_DISABLE_COPY_MOVE(PreparationModule);
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
    std::shared_ptr<Valve> valve;
    std::shared_ptr<Pump> pump, pump2;
    QString state_name, supply_name;
};

#endif // PREPARATIONMODULE_H
