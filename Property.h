#ifndef PROPERTY_H_
#define PROPERTY_H_

#include <iostream>
using namespace std;

class Property
{
public:

    double worth;

    Property(double worth) : worth(worth) {};

    virtual double tax() = 0;

};
#endif
