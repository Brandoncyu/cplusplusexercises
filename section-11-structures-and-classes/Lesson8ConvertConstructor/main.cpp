#include <iostream>
#include "integer.h"

using namespace std;

int main()
{
    /*
    int a = 10;
    int b = 20;

    cout << a + b << endl;

    string text1 = "lala";
    string text2 = "second string "+ text1;

    cout << text2 <<endl;
    */

    Integer a(50);
    int b = (int)a;
    a = 100;
    cout << a.getNr() << endl;
    cout << b << endl;

    a+=b;

    cout << a.getNr() << endl;
    return 0;
}
