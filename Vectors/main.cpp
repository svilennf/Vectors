#include <iostream>
#include "Point.h"
#include "Vector.h"


using namespace std;

int main()
{
    Point p;
    Point a(1.0, 4.0, 5.0);
    Point b(2.0, 4.0, 5.0);
    cout << p.getX()<< " " << p.getY() << " " << p.getZ()<< " " << endl;
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << " " << endl;

    Vector v1(a, b);
    Vector v2(1, 2, 3);
    cout << v1.getI();
    return 0;
}

