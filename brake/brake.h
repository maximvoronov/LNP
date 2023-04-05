#ifndef BRAKE_H
#define BRAKE_H
#include "idevice.h"
#include <QString>

class Brake : public IDevice
{
public:
    enum class BRAKECATEGORIES { ELECTROMAGNETIC_CLUTCHES_AND_BRAKES, SPRING_BRAKES, BRAKE_MOTORS };
    Brake();
    Brake(qreal Torque, qint32 Rotation_Speed, qreal Inner_Diameter, qreal Outer_Diameter);
    ~Brake();
    Q_DISABLE_COPY_MOVE(Brake);
    void setTorque(qreal torque);
    qreal getTorque()const;
    void setRotationSpeed(qint32 rotation_speed);
    qint32 getRotationSpeed() const;

    qreal getInnerDiameter() const;
    void setInnerDiameter(qreal inner_diameter) ;

    qreal getOuterDiameter() const;
    void setOuterDiameter(qreal outer_diameter);

    virtual void setStep(qint32 step){ this->step = step; }

private:
    qreal torque;
    qint32 rotation_speed, step;
    qreal inner_diameter, outer_diameter;
};
#endif // BRAKE_H
