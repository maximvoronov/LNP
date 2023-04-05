#include "verticaldrive.h"

VerticalDrive::VerticalDrive(){
}
VerticalDrive::VerticalDrive(
              std::shared_ptr<Brake> brake,
              std::shared_ptr<Encoder> encoder,
              std::shared_ptr<Engine> engine)
{
        //sensor =  std::make_shared<Sensor>();
        encoder = std::make_shared<Encoder>();
        encoder->setName(QString("EE-SX951-R"));
        encoder->setBrand("Omron");
        encoder->setWidth(0);
        encoder->setCurrent(15);
        encoder->setVoltage(24);
        encoder->setRessistance(1.5);

        brake->setName(QString("BXW-03-10H"));
        brake->setBrand(QString("MIKKY PULLEY"));
        brake->setWidth(0);
        brake->setWidth(2);
        brake->setTorque(23.8);

        encoder->setHoursWorkBeforeBrake(1300000000000000000);
        encoder->setCurrent(24);

        engine->setName(QString("DXW"));
        engine->setBrand(QString("StepMotor"));
}

VerticalDrive::~VerticalDrive(){
}

bool VerticalDrive::updateDataEncoder(enum EncoderEvents encoder_events, qreal value){
    switch(encoder_events)
    {
        case EncoderEvents::ENCODER_RESOLUTION:
        if(0 == encoder[0]->getEncoderResolution()){
            encoder[0]->setEncoderResolution(value);
            break;
        }
    case EncoderEvents::ENCODER_TEMPERATURE:
        if(0 == encoder[0]->getTemperature()){
            encoder[0]->setTemperature(value);
            break;
        }
    case EncoderEvents::ENCODER_HOURS_OF_WORK:
        if(0 == encoder[0]->getHoursWorkBeforeBrake()){
            encoder[0]->setHoursWorkBeforeBrake(value);
            break;
        }
    return true;
    }
    return false;
}

bool VerticalDrive::updateDataBrake(enum BrakeEvents brake_events, qreal value){
    switch(brake_events)
    {
        case BrakeEvents::BRAKE_TORQUE:
        if(brake->getTorque() == 0)
        {
            brake->setTorque(value);
            break;
        }
    case BrakeEvents::BRAKE_ROTATION_SPEED:
        qreal i = static_cast<qreal>(value);
            if(brake->getRotationSpeed() == 0){
                brake->setRotationSpeed(i);
                break;
        }
        return true;
    }
    return false;
}

/*
bool VerticalDrive::updateDataEngine(enum EngineEvents engine_events, qreal value){
    switch(engine_events){
    case EngineEvents::ENGINE_TORQUE:
        if(engine->getTorque() == 0)
        {
            engine->setTorque(value);
            break;
        }
    case EngineEvents::ENGINE_CURRENT:
        if(engine->getCurrent()){
            engine->setCurrent(value);
            break;
        }
    case EngineEvents::ENGINE_VOLTAGE:
        if(engine->getVoltage()){
            engine->setVoltage(value);
            break;
        }
    case EngineEvents::ENGINE_INERCIA:
        if(engine->getInercia()){
            engine->setInercia(value);
            break;
        }
    case EngineEvents::ENGINE_WATTAGE:
        if(engine->getWattage() == 0){
            engine->setWattage(value);
            break;
        }
    case EngineEvents::ENGINE_RESSISTANCE:
        if(engine->getRessistance() == 0)
        {
            engine->setRessistance(value);
            break;
        }
        return true;
    }
    return false;
}
*/
