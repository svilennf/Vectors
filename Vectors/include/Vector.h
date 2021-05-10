#ifndef VECTOR_H
#define VECTOR_H

#include "Point.h"

class Vector : public Point
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

    double lenght() const;

    Vector direction() const;

    bool isNullVector() const;

    bool isParallel(Vector v) const;

    bool isPerpendicular(Vector v) const;


};

#endif // VECTOR_H
