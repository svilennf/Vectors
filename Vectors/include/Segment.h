#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"
#include "Vector.h"
#include "Line.h"

class Segment : public Line
{
private:
    int interval;
public:
    Segment(Point p, Vector v, int i);
    virtual ~Segment();

    int getLength();
    Point getMiddle();

    bool operator==(Segment s);


};

#endif
