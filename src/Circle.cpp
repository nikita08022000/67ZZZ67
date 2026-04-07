#include <iostream>
#include <cmath>
class Circle : public I2DShape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() const {
        return PI * radius * radius;
    }
    
    double perimeter() const {
        return 2 * PI * radius;
    }
    
    const char* name() const {
        return "Circle";
    }
};