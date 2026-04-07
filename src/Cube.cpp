#include <iostream>
#include <cmath>

class Cube : public I3DShape {
private:
    double side;
public:
    Cube(double s) : side(s) {}
    
    double volume() const {
        return side * side * side;
    }
    
    double surfaceArea() const {
        return 6 * side * side;
    }
    
    const char* name() const {
        return "Куб";
    }
};
