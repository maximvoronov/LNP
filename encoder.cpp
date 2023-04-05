#include "encoder.h"

Encoder::Encoder(){
}
Encoder::~Encoder(){
}

void Encoder::setHoursWorkBeforeBrake(qreal hours){
    this->hours = hours;
}
qreal Encoder::getHoursWorkBeforeBrake() const{
    return this->hours;
}
void Encoder::setTemperature(qreal temperature){
    this->temperature = temperature;
}
qreal Encoder::getTemperature() const{
    return this->temperature;
}
qint32 Encoder::getEncoderResolution() const{
    return this->encoder_resolution;
}
void Encoder::setEncoderResolution(qint32 encoder_resolution){
    this->encoder_resolution = encoder_resolution;
}
QString Encoder::getOutputType() const{
    return this->outputtype;
}
void Encoder::setOutputType(QString output_type){
    this->outputtype = output_type;
}
void Encoder::setMechanicalShock(qreal mechanicalshock){
        this->mechanicalshock = mechanicalshock;
}
qreal Encoder::getMechanicalShock() const{
    return this->mechanicalshock;
}
void Encoder::setRotationSpeed(qreal rotationspeed){
    this->rotationspeed = rotationspeed;
}
qreal Encoder::getRotationSpeed() const{
    return this->rotationspeed;
}
qreal Encoder::getDistance() const{
    return this->distance;
}
void Encoder::setDistance(qreal distance){
    this->distance = distance;
}
/*Direction of rotation*/
qreal Encoder::getDirection() const{
    return this->direction;
}
void Encoder::setDirection(qreal direction){
    this->direction = direction;
}
qreal Encoder::getPosition() const{
    return this->position;
}
void Encoder::setPosition(qreal position){
    this->position = position;
}
