#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>

using namespace std;

template<typename T>
class Point //base class, or product class, or super class.
{
    protected:
        T x;
    public:
        Point(T = 0);
        ~Point();
        T getX();
        void setX(T);

};
template<typename T>
Point<T>::Point(T x)
{
    this->x = x;
    cout << "The constructor from the Point class has just been invoked" << endl;
}
template<typename T>
Point<T>::~Point()
{
    cout << "The desctructor from the Point class has just been invoked" << endl;
}
template<typename T>
void Point<T>::setX(T x)
{
    this->x = x;
}
template<typename T>
T Point<T>::getX()
{
    return this->x;
}
template<>
double Point<double>::getX()
{
    cout << "This function will be executed only when Point<double> will be created" <<endl;
    return this->x;
}

template<typename K>
class Point<K*>
{
    public:
        Point(K a=0) { cout << "You can't use pointers here" <<endl;}
};

template<typename T>
class Point2D : public Point<T> //derived class, or child class, or sub class
{
    protected:
        T y;
    public:
        Point2D(T=0, T=0);
        ~Point2D();
        T getY() { return y; }
        void setX(T);
        void setY(T);
        void setXY(T, T);
        Point2D operator+(Point2D);

};
template<typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x)
{
    this->y = y;
    cout << "The constructor from the Point2D class has just been invoked" << endl;
}
template<typename T>
Point2D<T>::~Point2D()
{
    cout << "The desctructor from the Point2D class has just been invoked" << endl;
}
template<typename T>
void Point2D<T>::setY(T y)
{
    this->y = y;
}
template<typename T>
void Point2D<T>::setXY(T x, T y)
{
    setX(x);
    setY(y);
}
template<typename T>
void Point2D<T>::setX(T x)
{
    this->x = x;
    cout << "I am point2d" <<endl;
}
template<typename T>
Point2D<T> Point2D<T>::operator+(Point2D o)
{
    Point2D temp;
    temp.setX(this->getX() + o.getX());
    temp.setY(this->getY() + o.getY());
    return temp;
}
template<>
class Point<char>
{
    public:
        Point(char a=0) { cout<< "this is from Point<char>" <<endl; }
};


/*
    class Point2D : Public Point
    everything that is inside Point (excluding constrcutor and destructor) will be in Point2d.
    private - CANNOT ACCESS.
    protectted - protected.
    public - public.

    class Point2D : protected Point
    everything that is inside Point (excluding constrcutor and destructor) will be in Point2d.
    private - CANNOT ACCESS.
    protectted - protected.
    public - protected.

    class Point2D : private Point
    everything that is inside Point (excluding constrcutor and destructor) will be in Point2d.
    private - CANNOT ACCESS.
    protectted - private.
    public - private.
*/

#endif // POINT_H_INCLUDED
