#include <iostream>
#include <cmath>
#include "I3DShape.h"

class Sphere : public I3DShape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    
    double volume() const {
        return (4.0 / 3.0) * PI * radius * radius * radius;
    }
    
    double surfaceArea() const {
        return 4 * PI * radius * radius;
    }
    
    const char* name() const {
        return "Sphere";
    }
};
