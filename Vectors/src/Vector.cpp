#include "Vector.h"


#include <iostream>

using namespace std;

Vector::Vector(): i(0.0), j(0.0), k(0.0) {}

Vector::Vector(double i, double j, double k): i(i), j(j), k(k) {}

Vector::Vector(Point a, Point b){
    i = b.getX()-a.getX();
    j = b.getY()-a.getY();
    k = b.getZ()-a.getZ();
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

Vector::~Vector(){}
