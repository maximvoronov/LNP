#include <brake/brake.h>

Brake::Brake()
{
}
Brake::Brake( qreal Torque, qint32 Rotation_Speed, qreal Inner_Diameter, qreal Outer_Diameter)
    :torque(Torque), rotation_speed(Rotation_Speed), inner_diameter(Inner_Diameter), outer_diameter(Outer_Diameter)
{
}

Brake::~Brake(){}

qreal Brake::getTorque()const {
    return this->torque;

}
void Brake::setTorque(qreal torque){
    this->torque = torque;
}

qint32 Brake::getRotationSpeed() const{
    return this->rotation_speed;
}
void Brake::setRotationSpeed(qint32 rotation_speed){
    this->rotation_speed = rotation_speed;
}


void Brake::setOuterDiameter(qreal outer_diameter){
    this->outer_diameter = outer_diameter;
}
qreal Brake::getOuterDiameter() const{
    return this->outer_diameter;
}
void Brake::setInnerDiameter(qreal inner_diameter){
    this->inner_diameter = inner_diameter;
}
qreal Brake::getInnerDiameter() const{
    return this->inner_diameter;
}

