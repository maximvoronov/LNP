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
