#include "pd30_08.h"

PD30_08::PD30_08()
{

}
PD30_08::~PD30_08(){}

void PD30_08::setName(QString name){
    this->name = name;
}

QString PD30_08::getName() const{
    return this->name;
}

void PD30_08::setBrand(QString brand){
    this->brand = brand;
}
QString PD30_08::getBrand() const{
    return this->brand;
}

void PD30_08::setOutputType(QString output_type){
    this->output_type = output_type;
}

QString PD30_08::getOutputType() const{
    return this->output_type;
}

void PD30_08::setEncoderResolution(std::vector<qint32> encoder_resolution, qint32 value){
    if(encoder_resolution.empty()){
        /**/
    }
    else{
        encoder_resolution.push_back(value);
    }
}

void PD30_08::setShaftSize(std::vector<qreal> shaft_size, qreal value){
    if(shaft_size.empty())
    {
        /**/
    }
    else
    {
        shaft_size.push_back(value);
    }
}

void PD30_08::setSupplyVoltage(std::vector<qreal> voltage, qreal value){
    if(voltage.empty()){
        /**/
    }
    else{
        voltage.push_back(value);
    }
}

std::vector<qint32> PD30_08::getEncoderResolution() const{
    return this->encoder_resolution;
}

std::vector<qreal> PD30_08::getShaftSize() const{
    return this->shaft_size;
}
std::vector<qreal> PD30_08::getSupplyVoltage() const{
    return this->supply_voltage;
}

