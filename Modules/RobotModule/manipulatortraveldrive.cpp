#include "manipulatortraveldrive.h"

ManipulatorTravelDrive::ManipulatorTravelDrive(std::shared_ptr<Engine> engine,
                                             //  std::shared_ptr<Encoder> encoder,
                                               std::shared_ptr<Sensor> sensor){
    sensor->setName(QString("EE-SX-952-R"));
    sensor->setBrand(QString("Omron"));
    engine->setName(QString("57CM13-3A-3A-SZ"));
    engine->setBrand(QString("Leadshine"));
    //encoder->setName(QString("PD30-6.35-GE-1000-B-S-L-5-0.3"));
   // encoder->setBrand(QString("Purelogic"));
}

ManipulatorTravelDrive::~ManipulatorTravelDrive(){
};
