#include "Point.h"

#include <iostream>

using namespace std;

Point::Point() : x(0.0), y(0.0), z(0.0) {}
Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}
double Point::getZ() const{
    return z;
}

bool Point::operator==(const Point& b) const{ //dont fking know why this doesn't work
    return (x == b.getX());

}

//return ((a.getX() == b.getX()) && (a.getY() == b.getY()) && (a.getY() == b.getY()));
