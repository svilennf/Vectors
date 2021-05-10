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
    void setX(double d);
    void setY(double d);
    void setZ(double d);

    bool operator==(const Point& b) const;

};


#endif // POINT_H
