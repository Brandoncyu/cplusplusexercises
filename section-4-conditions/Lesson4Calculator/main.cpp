#include <iostream>

using namespace std;

int main()
{
    double var1, var2;

    beginning:

    cout << "Enter first number: ";
    cin >> var1;
    cout << "Enter second number: ";
    cin >> var2;

    cout << "What do you want to do with the numbers?" << endl;
    cout << "+ - add" << endl;
    cout << "- - subtract?" << endl;
    cout << "* - multiply" << endl;
    cout << "/ - divide" << endl;

    char decision;

    cin >> decision;
    system("clear");
    //use system("cls") for windows.

    switch (decision)
    {
        case '+':
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        case '-':
            cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
            break;
        case '*':
            cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
            break;
        case '/':
            if (var2)
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
            else
                cout << "You cannot divide by 0";
            break;
        default:
            cout << "You typed the wrong character";

    }

    char decision2;

    cout << "Do you want to conitnue that program? (Y/N) ";
    cin >> decision2;

    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning;
}
