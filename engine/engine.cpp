#include "engine.h"

Engine::Engine(){
}
Engine::~Engine(){
}

void Engine::wattageEstimate(qreal current, qreal voltage) noexcept{
    this->wattage  = static_cast<qreal>(current * voltage);
}

void Engine::setIP(QString ip){
    this->ip = ip;
}
QString Engine::getIP() const{
    return this->ip;
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
void Engine::setMaterial(QString material){
    this->material = material;
}
QString Engine::getMaterial() const{
    return  this->material;
}
qreal Engine::getMass()const{
    return this->mass;
}
void Engine::setMass(qreal mass){
    this->mass = mass;
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

qreal Engine::getInnerDiameter() const{
    return this->inner_diameter;
}
void Engine::setInnerDiameter(qreal inner_diameter){
    this->inner_diameter = inner_diameter;
}
qreal Engine::getOuterDiameter() const{
    return this->outer_diameter;
}
void Engine::setOuterDiameter(qreal outer_diameter){
    this->outer_diameter = outer_diameter;
}
void Engine::setCurrent(qreal current){
    this->current = current;
}
void Engine::setVoltage(qreal voltage){
    this->voltage = voltage;
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
void Engine::setWattage(qreal wattage){
    this->wattage = wattage;
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

