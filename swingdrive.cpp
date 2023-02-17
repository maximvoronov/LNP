#include "swingdrive.h"

SwingDrive::SwingDrive()
{

}

SwingDrive::SwingDrive(std::shared_ptr<Sensor> sensor,
                       std::shared_ptr<Encoder> encoder,
                       std::shared_ptr<Engine> engine)
{
    sensor->setName(QString("EE-SX952-R"));
    encoder->setName(QString("PD30-08-GE-1000-B-S-L-5-0.3"));
    engine->setName(QString("FL60STH86-2008-BF"));

}

SwingDrive::~SwingDrive(){}

