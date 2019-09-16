#include <iostream>

using namespace std;

int main()
{
    int x = 100;
    //can only use int or character for switch

    switch (x)
    {
        case 'd':
            cout << "this is the place for instructions that will be executed when switch value is d or 100";
            break;
        case 25:
            cout << "this is the place for instructions that will be executed when switch value is 25";
            break;
        case 50:
            cout << "this is the place for instructions that will be executed when switch value is 50";
            break;
        default:
            cout << "this is the place for instructions that will be executed when value is switch to any case";
    }



}
