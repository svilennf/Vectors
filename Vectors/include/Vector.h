#ifndef VECTOR_H
#define VECTOR_H

#include "Point.h"

class Vector
{
private:
    double i;
    double j;
    double k;
public:
    Vector();
    Vector(Point a, Point b);
    Vector(double i, double j, double k);
    virtual ~Vector();

    double getI() const;
    double getJ() const;
    double getK() const;


};

#endif // VECTOR_H
