class Trapezoid : public I2DShape {
private:
    double a, b, c, d;
    double h;
public:
    Trapezoid(double base1, double base2, double side1, double side2, double height)
        : a(base1), b(base2), c(side1), d(side2), h(height) {}
    
    double area() const {
        return (a + b) * h / 2.0;
    }
    
    double perimeter() const {
        return a + b + c + d;
    }
    
    const char* name() const {
        return "Trapezoid";
    }
};