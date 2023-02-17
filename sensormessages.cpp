#include "sensormessages.h"

SensorMessages::SensorMessages(){}

QString SensorMessages::CalibrationStart() const{
    return QString("Калибровка начата");
}

QString SensorMessages::TurnOn() const{
    return QString("Порот начат");
}

QString SensorMessages::TurnOff() const{
    return QString("Поворот завершен");
}

QString SensorMessages::CalibrationFinish()const{
    return QString("Калибровка завершена");
}

QString SensorMessages::CurrentOff() const{
    return QString("Ток отсутсвует");
}

QString SensorMessages::SensorOn()const{
    return QString("Датчик включён");
}

QString SensorMessages::SensorOff()const{
    return QString("Датчик выключен");
}

QString SensorMessages::DataOutOfRange()const{
    return QString("Данные вышли за пределы измерения");
}

QString SensorMessages::TemperatureOutOfRange() const{
    return QString("Температура вышла за пределы измерения");
}

QString SensorMessages::OverHeat()const{
    return QString("Перегрев датчика");
}

QString SensorMessages::ResolutionOff() const{
    return QString("Не задано разрешение");
}
