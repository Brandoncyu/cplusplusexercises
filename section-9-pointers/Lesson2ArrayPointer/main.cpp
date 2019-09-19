#include <iostream>

using namespace std;

int main()
{
    //an array is technically a pointer. All the values are next to each other in memory.

    int a[3];
    short int zm;
    int *p = &a[0];
    a[0] = 10;
    a[1] = 20;
    a[2] = 40;

    cout << p << endl;
    cout << a << endl;
    cout << &a[0] << endl;
    cout << &a[1] << endl; //addresses for each are off four bytes.
    cout << &a[2] << endl;

    cout << endl << endl << endl;

    cout << a << endl;
    cout << a + 1 <<endl;
    cout << a + 2 << endl;

    cout << endl << endl << endl;

    cout << *a << endl; // same as a[0]
    cout << *(a + 1) <<endl; // same as a[1]
    cout << *(a + 2) << endl; // same as a[2]

    //cout << a++ << endl; this DOES NOT WORK.

    cout << endl << endl << endl;

    int * p2 = &a[0];

    cout << *p2 <<endl;
    cout << ++*p2 <<endl; //increasing the value in this address. 10 goes to 11.
    cout << *++p2 <<endl; //says lets move one over, and get the address of it.
    cout << *p2++ <<endl;
    cout << *p2 <<endl; //40;
    cout << *++p2 <<endl; //40;

    return 0;
}
