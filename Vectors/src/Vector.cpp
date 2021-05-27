#include "Vector.h"

#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;

class VectorLenghtException : public logic_error {
public:
    VectorLenghtException(string reason);
};
VectorLenghtException::VectorLenghtException(string reason): logic_error(reason){}

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
    if(lenght() == 0){
        throw VectorLenghtException("Lenght is 0!");
    }
    return Vector(i/lenght(), j/lenght(), k/lenght());
}

bool Vector::isNullVector() const{
    return (i==0 && j==0 && k==0);
}

bool Vector::isParallel(Vector v) const{
    if(lenght() == 0 || v.lenght() == 0){
        throw VectorLenghtException("Lenght is 0!");
    }
    return (i/v.getI() == j/v.getJ()) && (i/v.getI() == k/v.getK());
}

bool Vector::isPerpendicular(Vector v) const{
    if(lenght() == 0 || v.lenght() == 0){
        throw VectorLenghtException("Lenght is 0!");
    }
    return (i*v.getI() + j*v.getJ() + k*v.getK() == 0);
}

Vector Vector::addition(Vector v) const{
    return Vector(i+v.getI(), j + v.getJ(), k+ v.getK());
}

Vector Vector::subtraction(Vector v) const{
    return Vector(i - v.getI(), j - v.getJ(), k - v.getK());
}

Vector Vector::multiplication(double r) const{
    return Vector(i * r, j * r, k * r);
}

double Vector::scalarMultiplication(Vector v) const{
    return (i * v.getI() + j * v.getJ() + k * v.getK());
}

Vector Vector::vectorMultiplication(Vector v) const{
    return Vector(j * v.getK() - k * v.getJ(), k * v.getI() - i*v.getK(), i*v.getJ()-j*v.getI());
}

double Vector::mixedMultiplication(Vector v1, Vector v2) const{
    return(v2.scalarMultiplication(vectorMultiplication(v1)));
}


Vector::~Vector(){}
