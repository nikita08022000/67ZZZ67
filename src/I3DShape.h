#include <iostream>
#include <cmath>

const double PI = 3.1415;

class I3DShape {
public:
    virtual ~I3DShape() {}
    virtual double volume() const = 0;
    virtual double surfaceArea() const = 0;
    virtual const char* name() const = 0;
};