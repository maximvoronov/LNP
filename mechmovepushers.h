#ifndef MECHMOVEPUSHERS_H
#define MECHMOVEPUSHERS_H
#include <engine.h>
#include <QThread>
#include <bearing.h>

/*Механизм перемещния толкателей*/
class MechMovePushers
{
public:

    MechMovePushers();
    MechMovePushers(std::shared_ptr<Engine> engine, std::shared_ptr<Bearing> bearing);
    Q_DISABLE_COPY_MOVE(MechMovePushers);
    ~MechMovePushers();
private:
    std::shared_ptr<Engine> engine;
    std::shared_ptr<Bearing> bearing;
    bool flag;
};

#endif // MECHMOVEPUSHERS_H
