#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 4;

    cout << a + b << endl; // addition operation
    cout << a - b << endl; // subtraction operation
    cout << a * b << endl; // multiplication operation
    cout << a / b << endl; // division operation. If it does not divide perfectly, it rounds. You have to use double or float to make it a real number

    cout << 11 % b << endl;

    //incrementation
    int c = 1;
    c += 1;
    // /=, -=. +=, *=
    cout << c << endl;
    //decremntation


    //POST incrementation
    int d = 1;
    cout << d++ << endl;
    //console logs 1

    cout << d << endl;
    //THIS console logs 2.


    //PRE incrementation
    int e = 1;
    cout << ++e << endl;
    //console logs 1

    cout << e << endl;
    //THIS console logs 2.

    //POST incrementation
    int f = 1;
    cout << f--s << endl;
    //console logs 1

    cout << f << endl;
    //THIS console logs 2.


    //PRE incrementation
    int g = 1;
    cout << --g << endl;
    //console logs 1

    cout << g << endl;
    //THIS console logs 2

}
