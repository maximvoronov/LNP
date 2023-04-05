#include "sensormessages.h"

SensorMessages::SensorMessages(){}

QString SensorMessages::CalibrationStart() const noexcept{
    return QString("Калибровка начата");
}

QString SensorMessages::TurnOn() const noexcept{
    return QString("Поворот начат");
}

QString SensorMessages::TurnOff() const noexcept{
    return QString("Поворот завершен");
}

QString SensorMessages::CalibrationFinish()const noexcept{
    return QString("Калибровка завершена");
}

QString SensorMessages::CurrentOff() const noexcept{
    return QString("Ток отсутсвует");
}

QString SensorMessages::SensorOn()const noexcept{
    return QString("Датчик включён");
}

QString SensorMessages::SensorOff()const noexcept{
    return QString("Датчик выключен");
}

QString SensorMessages::DataOutOfRange()const noexcept{
    return QString("Данные вышли за пределы измерения");
}

QString SensorMessages::TemperatureOutOfRange() const noexcept{
    return QString("Температура вышла за пределы измерения");
}

QString SensorMessages::OverHeat()const noexcept{
    return QString("Перегрев датчика");
}

QString SensorMessages::ResolutionOff() const noexcept{
    return QString("Не задано разрешение");
}
QString SensorMessages::NoNitrogen() const noexcept{
    return QString("Отсутствует Азот");
}
QString SensorMessages::NoVacuum() const noexcept{
    return QString("Отсутствует Ваккуум");
}
QString SensorMessages::NoAir() const noexcept{
    return QString("Отсутствует воздух");
}
