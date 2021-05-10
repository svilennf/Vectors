#include "Vector.h"

#include <math.h>
#include <iostream>

using namespace std;

Vector::Vector(): i(0.0), j(0.0), k(0.0) {}

Vector::Vector(double i, double j, double k): i(i), j(j), k(k) {}

Vector::Vector(Point a, Point b){
    i = b.getX()-a.getX();
    j = b.getY()-a.getY();
    k = b.getZ()-a.getZ();

    setX(a.getX());
    setY(a.getY());
    setZ(a.getZ());
}

double Vector::getI() const{
    return i;
}
double Vector::getJ() const{
    return j;
}
double Vector::getK() const{
    return k;
}

double Vector::lenght() const{
    return sqrt(i*i + j*j + k*k);
}

Vector Vector::direction() const{
    return Vector(i/lenght(), j/lenght(), k/lenght());
    //TODO: Throw VectorLengthException if len = 0
}

bool Vector::isNullVector() const{
    return (i==0 && j==0 && k==0);
}

bool Vector::isParallel(Vector v) const{
    return (i/v.getI() == j/v.getJ()) && (i/v.getI() == k/v.getK());
    //TODO: Throw VectorLengthException if len = 0
}

bool Vector::isPerpendicular(Vector v) const{
    return (i*v.getI() + j*v.getJ + k*v.getK() == 0);
    //TODO: Throw VectorLengthException if len = 0
}

Vector::~Vector(){}
