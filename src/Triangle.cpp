#include <iostream>
#include <cmath>
#include "I2DShape.h"



class Triangle : public I2DShape {
private:
    double a, b, c;
public:
    Triangle(double side1, double side2, double side3)
        : a(side1), b(side2), c(side3) {}
    
    double area() const {
        double p = (a + b + c) / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    
    double perimeter() const {
        return a + b + c;
    }
    
    const char* name() const {
        return "Triangle";
    }
};
