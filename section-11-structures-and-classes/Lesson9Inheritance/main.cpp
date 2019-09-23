#include <iostream>
#include "point.h"

using namespace std;

void operationOnPoints();

int main()
{
    operationOnPoints();
    return 0;
}

void operationOnPoints()
{
    //Point p1(5);

    //cout << p1.getX() << endl;

    Point2D p2(50, 20);
    p2.setY(100);
    p2.setX(200);
    p2.Point::setX(50); //how to use original method.

    cout << p2.getX() << ", " << p2.getY()  << endl;
}
