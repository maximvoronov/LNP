#include "sensor.h"

Sensor::Sensor(){
}
Sensor::Sensor(QString Name, QString Brand, QString Protection,
               qreal Width, qreal Height, qreal Length,
               qreal Current, qreal Voltage, qreal Wattage,
               qreal Ressistance, qreal Working_Temperature,
               qreal Environment_Temperature, bool State):
    name(Name), brand(Brand), protection(Protection), width(Width), length(Length),
    height(Height), current(Current), voltage(Voltage), wattage(Wattage),
    ressistance(Ressistance), working_temperature(Working_Temperature),
    environment_temperature(Environment_Temperature), state(State)
{

}
Sensor::~Sensor(){}
void Sensor::setIP(QString ip){
    this->ip = ip;
}
QString Sensor::getIP() const{
    return this->ip;
}
void Sensor::setName(QString name){
    this->name = name;
}
QString Sensor::getName() const{
    return name;
}
void Sensor::setBrand(QString brand){
    this->brand = brand;
}
QString Sensor::getBrand() const{
    return this->brand;
}
qreal Sensor::getMass() const{
    return this->mass;
}
void Sensor::setMass(qreal mass){
    this->mass = mass;
}
QString Sensor::getMaterial() const{
    return this->material;
}
void Sensor::setMaterial(QString material){
    this->material = material;
}
void Sensor::setWidth(qreal width){
    this->width = width;
}
void Sensor::setInnerDiameter(qreal inner_diameter){
    this->inner_diameter = inner_diameter;
}
qreal Sensor::getInnerDiameter() const{
    return this->inner_diameter;
}
void Sensor::setOuterDiameter(qreal outer_diameter){
   this->outer_diameter = outer_diameter;
}
qreal Sensor::getOuterDiameter() const{
    return this->outer_diameter;
}
void Sensor::setHeight(qreal height){
    this->height = height;
}
void Sensor::setLength(qreal length){
    this->length = length;
}
qreal Sensor::getWidth() const{
    return this->width;
}
qreal Sensor::getHeight() const{
    return this->height;
}
qreal Sensor::getLength() const{
    return this->length;
}
void Sensor::setCurrent(qreal current){
    this->current = current;
}
void Sensor::setVoltage(qreal voltage){
    this->voltage = voltage;
}
void Sensor::setWattage(qreal wattage){
    this->wattage = wattage;
}
void Sensor::setRessistance(qreal ressistance){
    this->ressistance = ressistance;
}
qreal Sensor::getCurrent()const{
    return this->current;
}
qreal Sensor::getVoltage() const{
    return this->voltage;
}
qreal Sensor::getWattage() const{
    return this->wattage;
}
qreal Sensor::getRessistance() const{
    return this->ressistance;
}
QString Sensor::getProtection() const{
    return this->protection;
}
void Sensor::setProtection(QString protection){
    this->protection = protection;
}

qreal Sensor::getWorkingTemperature() const{
    return this->working_temperature;
}
void Sensor::setWorkingTemperature(qreal working_temperature){
    this->working_temperature = working_temperature;
}
qreal Sensor::getEnvironmentTemperature() const{
    return this->environment_temperature;
}
void Sensor::setEnvironmentTemperature(qreal environment_temperature){
    this->environment_temperature = environment_temperature;
}
bool Sensor::getState() const noexcept{
    return this->state;
}
void Sensor::setState(bool state){
    this->state = state;
}
