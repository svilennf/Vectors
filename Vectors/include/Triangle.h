#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    double sideA, sideB, sideC;

public:
    Triangle();
    Triangle(double sideA, double sideB, double sideC);
    Triangle(Point a, Point b, Point c);



    void setSideA(double d);
    void setSideB(double d);
    void setSideC(double d);
    void returnType();

    double getSideA() const;
    double getSideB() const;
    double getSideC() const;
    double getArea() const;
    double getPerimeter() const;
    double getSemiPerimeter() const;

    bool checkIfValid() const;

    bool operator==(const Point& b) const;

};


#endif // TRIANGLE_H