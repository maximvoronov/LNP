#ifndef BEARING_H
#define BEARING_H
#include <device.h>
#include <coil.h>


class Bearing : public Device, public Coil
{
public:

    Bearing();
};

#endif // BEARING_H
