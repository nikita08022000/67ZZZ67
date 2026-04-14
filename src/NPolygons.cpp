#include <iostream>
#include <cmath>
#include "I2DShape.h"


class NPolygon : public I2DShape {
private:
    int n;
    double side;
public:
    NPolygon(int sides, double sideLength) : n(sides), side(sideLength) {}
    
    double area() const {
        return (n * side * side) / (4 * tan(PI / n));
    }
    
    double perimeter() const {
        return n * side;
    }
    
    const char* name() const {
        static char buffer[32];
        sprintf(buffer, "NPolygons", n);
        return buffer;
    }
};
