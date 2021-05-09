#ifndef POINT_H
#define POINT_H

class Point{
private:
    double x;
    double y;
    double z;
public:
    Point();
    Point(double x, double y, double z);
    double getX() const;
    double getY() const;
    double getZ() const;

    bool operator==(const Point& b) const;

};


#endif // POINT_H
