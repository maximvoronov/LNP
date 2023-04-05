#ifndef MECHMOVEPUSHERS_H
#define MECHMOVEPUSHERS_H
#include <engine/engine.h>
#include <QThread>

/*Механизм перемещения толкателей*/
class MechMovePushers
{
public:
    MechMovePushers();
    MechMovePushers(std::shared_ptr<Engine> engine);
    Q_DISABLE_COPY_MOVE(MechMovePushers);
    ~MechMovePushers();
private:
    std::shared_ptr<Engine> engine;
    bool flag;
};

#endif // MECHMOVEPUSHERS_H
