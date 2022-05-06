#ifndef CAR_H_
#define CAR_H_
#include "Property.h"

class Car : public Property
{
public:

    Car(double worth) : Property(worth) {};

    double tax() override;
};
#endif
