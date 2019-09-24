#include <iostream>
#include "point.h"

using namespace std;

void operationOnPoints();

//templates <> means general
template<typename T, typename T2>
T add(T var1, T2 var2)
{
    return var1 + var2;
}
/*
template<>
Point2D add(Point2D var1, Point2D var2)
{
    Point2D tmp;

    tmp.setX(var1.getX() + var2.getX());
    tmp.setY(var1.getY() + var2.getY());

    return tmp;
}
*/
typedef Point<int> PointInt;
int main()
{
    operationOnPoints();

    //use <> to specify type returned.
    //cout << add<double, double>(2, 6.5) << endl;

    //cout << static_cast<int>(6.5) << endl;

    return 0;
}

void operationOnPoints()
{
    PointInt a(5); //same as Point<int> a(5);
    Point<double> b(10.5);

    Point2D<int> c(5,6);
    Point2D<double> d(5.5,6.6);

    cout << a.getX() << endl;
    cout << b.getX() << endl;
    cout << c.getX() << endl;
    cout << c.getY() << endl;
    cout << d.getX() << endl;
    cout << d.getY() << endl;

    Point<char> e(10.5);

    Point<int*> f(20);
}
