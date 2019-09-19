#include <iostream>

using namespace std;

int & swap(int &, int &);

int main()
{
    int a = 10;
    int b = 20;

    int &c = swap(a, b);

    c= 100;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;


    return 0;
}

int & swap(int &x, int &y)
{
    int t;
    t = x; //t = 10
    x = y; //a = 20
    y = t; // b = 10

    return x;
}
