#include "engine.h"

Engine::Engine()
{

}
void Engine::setName(QString name){
    this->name = name;
}
QString Engine::getName() const{
    return name;
}
void Engine::setBrand(QString brand){
    this->brand = brand;
}
QString Engine::getBrand() const{
    return this->brand;
}
void Engine::setWidth(qreal width){
    this->width = width;
}

void Engine::setHeight(qreal height){
    this->height = height;
}
void Engine::setLength(qreal length){
    this->length = length;
}
qreal Engine::getWidth() const{
    return this->width;
}
qreal Engine::getHeight() const{
    return this->height;
}
qreal Engine::getLength() const{
    return this->length;
}
void Engine::setCurrent(qreal current){
    this->current = current;
}
void Engine::setVoltage(qreal voltage){
    this->voltage = voltage;
}
void Engine::setWattage(qreal wattage){
    this->wattage = wattage;
}
void Engine::setRessistance(qreal ressistance){
    this->ressistance = ressistance;
}
qreal Engine::getCurrent()const{
    return this->current;
}
qreal Engine::getVoltage() const{
    return this->voltage;
}
qreal Engine::getWattage() const{
    return this->wattage;
}
qreal Engine::getRessistance() const{
    return this->ressistance;
}
void Engine::setTorque(qreal torque){
    this->torque = torque;
}
qreal Engine::getTorque() const{
    return this->torque;
}
void Engine::setDiameter(qreal diameter){
    this->diameter = diameter;
}
qreal Engine::getDiameter() const{
    return this->diameter;
}
void Engine::setShaftSize(qreal shaft_size){
    this->shaftsize = shaft_size;
}
qreal Engine::getShaftSize() const{
    return this->shaftsize;
}
void Engine::setInercia(qreal inercia){
    this->inercia = inercia;
}
qreal Engine::getInercia() const{
    return inercia;
}
void Engine::setMotoHours(quint32 moto_hours){
    this->motohours = moto_hours;
}
quint32 Engine::getMotoHours() const{
    return this->motohours;
}
