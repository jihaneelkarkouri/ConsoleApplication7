#include "Point.h"
#include "math.h"
#include <iostream>
using namespace std;
Point::Point(float a, float b)
{
    x = a;
    y = b;
}

float Point::distance(Point p1,Point p2)
{
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}

void Point::afficher()
{
    cout << "(" << x << "," << y << ")" << endl;
}
