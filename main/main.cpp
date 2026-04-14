#include <iostream>
#include <cmath>
#include 




int main() {
    std::cout << "========== 2D ФИГУРЫ ==========\n\n";
    
    Square square(5.0);
    Trapezoid trapezoid(8.0, 5.0, 4.0, 4.0, 3.0);
    Triangle triangle(3.0, 4.0, 5.0);
    Circle circle(3.0);
    NPolygon hexagon(6, 4.0);
    
    print2DShape(square);
    print2DShape(trapezoid);
    print2DShape(triangle);
    print2DShape(circle);
    print2DShape(hexagon);
    
    std::cout << "========== 3D ФИГУРЫ ==========\n\n";
    
    Cube cube(4.0);
    Sphere sphere(3.0);
    
    print3DShape(cube);
    print3DShape(sphere);
    
    std::cout << "========== МАССИВ ФИГУР ==========\n\n";
    
    I2DShape* shapes2D[] = {
        new Square(6.0),
        new Circle(2.5),
        new Triangle(5.0, 5.0, 6.0),
        new NPolygon(5, 3.0)
    };
    
    for (int i = 0; i < 4; i++) {
        print2DShape(*shapes2D[i]);
        delete shapes2D[i];
    }
    
    I3DShape* shapes3D[] = {
        new Cube(2.5),
        new Sphere(4.0)
    };
    
    for (int i = 0; i < 2; i++) {
        print3DShape(*shapes3D[i]);
        delete shapes3D[i];
    }
    
    return 0;
}