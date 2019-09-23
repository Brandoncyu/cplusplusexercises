#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point //base class, or product class, or super class.
{
    protected:
        int x;
    public:
        Point(int = 0);
        ~Point();
        int getX() { return x; }
        void setX(int);

};
class Point2D : public Point //derived class, or child class, or sub class
{
    protected:
        int y;
    public:
        Point2D(int=0, int=0);
        ~Point2D();
        int getY() { return y; }
        void setX(int);
        void setY(int);
        void setXY(int, int);

};
class Point3D : public Point2D
{

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
