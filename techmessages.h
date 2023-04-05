#ifndef TECHMESSAGES_H
#define TECHMESSAGES_H
#include <qglobal.h>
#include <QString>

class TechMessages final
{
public:
    Q_DISABLE_COPY_MOVE(TechMessages);
    /*Пластины нет на схвате(потеря пластины) в зоне столика ГМО манипулятор останов, схват стоп, сигнал авария*/
    QString plateAbsentRobot() const;
    /*Ванна не вверху(при начале процесса) - процесс стоп, сигнал авария*/
    QString bathDown() const;
    /*Пластины нет на столике(во время процесса)*1. Процесс - Стоп 2.Щётка и насадка в исходное. 3.Ванна вниз 4. Сигнал авария*/
    QString plateAbsentWorkingZone() const;
    /*Нет движения насадок. Исход - рабочее или рабочее - исход(во время процесса). Процесс стоп, сигнал - авария*/
    QString noMoveNozzle() const;
    /*Нет вращения столика во время процесса. Процесс - стоп, насадка в исходное, сигнал авария, ванна вниз*/
    QString noRotationZone() const;
    /**/
private:
    TechMessages();
};

#endif // TECHMESSAGES_H
