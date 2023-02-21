#include "fan.h"

Fan::Fan()
{}
QString Fan::getName() const{
    return this->name;
}
QString Fan::getBrand() const{
    return this->brand;
}
qreal Fan::getWidth() const{
    return this->width;
}
qreal Fan::getHeight() const{
    return this->height;
}
qreal Fan::getLength() const{
    return this->lenght;
}
qreal Fan::getCurrent()const{
    return this->current;
}
qreal Fan::getVoltage() const{
    return this->voltage;
}
qreal Fan::getWattage() const{
    return this->voltage;
}
qreal Fan::getRessistance() const{
    return this->ressistance;
}

