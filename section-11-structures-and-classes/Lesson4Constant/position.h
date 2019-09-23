#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position
{
    int x, y;
    public:
        Position(int, int);
        ~Position();
        void getPosition() const; //add const to be able to use on const classes.
        void setPosition(int, int);
};

#endif // POSITION_H_INCLUDED
