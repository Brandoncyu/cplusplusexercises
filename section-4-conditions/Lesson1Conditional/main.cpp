#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    if (a > b)
        cout << a << " > " << b << endl;
    else if (a < b)
        cout << a << " > " << b << endl;
    else
        cout << a << " = " << b << endl;

    cout << "test" << endl;


    if ((7 < 4 || 0 < 10) && (10 == 9)) //can use conditional;
        cout << "7 < 4 || 0 < 10" << endl;

}
