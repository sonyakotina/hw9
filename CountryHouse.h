#ifndef COUNTRYHOUSE_H_
#define COUNTRYHOUSE_H_
#include "Property.h"

class CountryHouse : public Property
{
public:

    CountryHouse(double worth) : Property(worth) {};

    double tax() override;
};
#endif
