#include "techmessages.h"

TechMessages::TechMessages(){}

QString TechMessages::plateAbsentRobot() const{
    return QString("Нет пластины на схвате!");
}

QString TechMessages::bathDown() const{
    return QString("Нет пластины на схвате!");
}

QString TechMessages::plateAbsentWorkingZone() const{
    return QString("Пластины нет на столике!");
}

/*Нет движения насадок. Исход - рабочее или рабочее - исход(во время процесса). Процесс стоп, сигнал - авария*/
QString TechMessages::noMoveNozzle() const{
    return QString("Нет движения насадок!");
}
/*Нет вращения столика во время процесса. Процесс - стоп, насадка в исходное, сигнал авария, ванна вниз*/
QString TechMessages::noRotationZone() const{
    return QString("Нет вращения столика!");
}
