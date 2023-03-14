#include "mechmovepushers.h"

MechMovePushers::MechMovePushers(){
}

MechMovePushers::MechMovePushers(std::shared_ptr<Engine> engine, std::shared_ptr<Bearing> bearing)
{
    engine = std::make_shared<Engine>();
    engine->setName(QString("dsfdsf"));
    bearing = std::make_shared<Bearing>();
    bearing->setr(12);
}


MechMovePushers::~MechMovePushers(){
}
