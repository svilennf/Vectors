#include "Point.h"

#include <iostream>

using namespace std;

Point::Point() : x(0.0), y(0.0), z(0.0) {}
Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

double Point::getX() const {
    return x;
}
double Point::getY() const {
    return y;
}
double Point::getZ() const {
    return z;
}
double Point::getDistance(Point& a) const {
    double dx = x - a.x, dy = y - a.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

void Point::setX(double d) {
    x = d;
}
void Point::setY(double d) {
    y = d;
}
void Point::setZ(double d) {
    z = d;
}




//return ((a.getX() == b.getX()) && (a.getY() == b.getY()) && (a.getY() == b.getY()));
