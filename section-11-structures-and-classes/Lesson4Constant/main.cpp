#include <iostream>
#include "position.h"

using namespace std;

int main()
{
    Position dog(10, 15);
    dog.getPosition();
    dog.setPosition(20,20);
    dog.getPosition();

    const Position house(100, 200); //const means you cant use any functions on it.
    house.getPosition();
    //house.setPosition(20,20);
    //house.getPosition();


    return 0;
}
