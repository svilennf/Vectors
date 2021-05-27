#include <iostream>
#include "Point.h"
#include "Vector.h"

bool Point::operator==(const Point& b) const{ //dont fking know why this doesn't work if in source
    return (x == b.getX());

}

Vector Vector::operator+(Vector v) const{
    return addition(v);
}

Vector Vector::operator-(Vector v) const{
    return subtraction(v);
}

Vector Vector::operator*(double d) const{
    return multiplication(d);
}

double Vector::operator*(Vector v) const{
    return scalarMultiplication(v);
}

Vector Vector::operator^(Vector v) const{
    return vectorMultiplication(v);
}

double Vector::operator()(Vector v1, Vector v2) const{
    return mixedMultiplication(v1, v2);
}

using namespace std;

int main()
{
    Point p;
    Point a(1.0, 4.0, 5.0);
    Point b(1.0, 4.0, 5.0);
//    cout << p.getX()<< " " << p.getY() << " " << p.getZ()<< " " << endl;
//    cout << a.getX() << " " << a.getY() << " " << a.getZ() << " " << endl;
//
    Vector v1(a, b);
    Vector v2(1, 2, 3);
    Vector v3 = v1^v2;
    cout << v3.getJ();
    return 0;
}

