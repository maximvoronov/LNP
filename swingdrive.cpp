#include "swingdrive.h"

/*
SwingDrive::SwingDrive(){
    name = "Привод поворота";
}
*/
SwingDrive::SwingDrive(std::shared_ptr<Sensor> sensor,
                       std::shared_ptr<Encoder> encoder,
                       std::shared_ptr<Engine> engine)
{
    Q_UNUSED(engine);
    sensor = std::make_shared<Sensor>();

    sensor->setName(QString("EE-SX952-R"));
    encoder = std::make_shared<Encoder>();

    encoder->setName(QString("PD30-08-GE-1000-B-S-L-5-0.3"));
    //engine = std::make_shared<Engine>();
    //engine->setName(QString("FL60STH86-2008-BF"));
}

const QString SwingDrive::getName() const{
    return this->name;
}
/*
void SwingDrive::setName(QString name){
    this->name = name;
}
*/
SwingDrive::~SwingDrive(){
}

