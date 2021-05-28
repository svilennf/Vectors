#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include "Vector.h"

class Line : public Vector
{
private:
    Point p;
    Vector v;
public:
    Line(Point p1, Point p2);
    Line(Vector v, Point p);
    virtual ~Line();

    double getPoint() const;
    double getVector() const;


    Vector getDirection() const;
    Vector getPerpendicular() const;
    int getAngle(Line l);



    bool operator+(Line l);

    bool operator||(Line l);

    bool operator==(Line l);

    bool operator&&(Line l);

    bool operator!=(Line l);

    bool operator|(Line l);

};

#endif // VECTOR_H
