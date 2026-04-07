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
        return "Шар";
    }
};
