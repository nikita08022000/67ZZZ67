#include <iostream>
#include <cmath>
class Square : public I2DShape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    
    double area() const {
        return side * side;
    }
    
    double perimeter() const {
        return 4 * side;
    }
    
    const char* name() const {
        return "Square";
    }
};