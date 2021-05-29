#include "Triangle.h"

#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

class EqualPointException : public logic_error {
public:
    EqualPointException(string reason);
};
EqualPointException::EqualPointException(string reason) : logic_error(reason) {}


Triangle::Triangle() : sideA(0.0), sideB(0.0), sideC(0.0) {}

Triangle::Triangle(double sideA, double sideB, double sideC) : sideA(sideA), sideB(sideB), sideC(sideC) {}


Triangle::Triangle(Point a, Point b, Point c) {
    if (a.getDistance(b) == 0) { throw EqualPointException("Point A matches with point B"); }
    if (b.getDistance(c) == 0) { throw EqualPointException("Point B matches with point C"); }
    if (c.getDistance(a) == 0) { throw EqualPointException("Point A matches with point C"); }
    setSideA(a.getDistance(b));
    setSideB(b.getDistance(c));
    setSideC(c.getDistance(a));
}
void Triangle::setSideA(double d) {
    sideA = d;
}
void Triangle::setSideB(double d) {
    sideB = d;
}
void Triangle::setSideC(double d) {
    sideC = d;
}
void Triangle::returnType() {
    if (!checkIfValid()) {
        cout << "Not a valid triangle" << endl;
    }
    else {
        if (sideA == sideB && sideB == sideC) {
            cout << "The triangle is equilateral." << endl;
        }
        else if (sideA == sideB || sideB == sideC || sideC == sideA) {
            cout << "The triangle is iosceles.";
        }
        else {
            cout << "The triangle is scalene.";
        }
    }
}
double Triangle::getSideA() const {
    return sideA;
}
double Triangle::getSideB() const {
    return sideB;
}
double Triangle::getSideC() const {
    return sideC;
}
double Triangle::getArea() const {
    double s = (sideA + sideB + sideC) / 2.0;
        return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}
double Triangle::getPerimeter() const {
    return sideA + sideB + sideC;
}
double Triangle::getSemiPerimeter() const {
    return getPerimeter() / 2.0;
}
bool Triangle::checkIfValid() const {
    if (sideA + sideB > sideC && sideC + sideB > sideA && sideA + sideC > sideB) {
        return true;
    }
    return false;
}
/*double getDistance(Point a, Point b){ --- *added this to the Point class*
    return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2))
}*/
