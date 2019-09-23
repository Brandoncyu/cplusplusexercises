#include <iostream>
#include "position.h"

using namespace std;

void setX(Position &, int);
int main()
{
    Position dog(10, 15);
    dog.getPosition();
    setX(dog, 1500);
    dog.getPosition();

    const Position house(100, 200); //const means you cant use any functions on it.
    house.getPosition();
    //house.setPosition(20,20);
    //house.getPosition();


    return 0;
}

void setX(Position & obj, int value)
{
    //a copy of the value is sent in.
    obj.x = value;
};
