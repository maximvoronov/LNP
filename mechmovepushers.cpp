#include "mechmovepushers.h"

MechMovePushers::MechMovePushers(){
}

MechMovePushers::MechMovePushers(std::shared_ptr<Engine> engine)
{
    Q_UNUSED(engine);
   // engine = std::make_shared<Engine>();
    //engine->setName(QString("dsfdsf"));
    //QString s = engine.get()->getMaterial();

}

MechMovePushers::~MechMovePushers(){
}
