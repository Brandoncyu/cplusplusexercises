#include <iostream>

using namespace std;

int main()
{
    cout << "How many numbers would you like to store in an array?" <<endl;
    cin >> amount;

    int array[amount]; //this does not ensure that memory will be free.

    array[0] = 500;

    cout << array[0] << endl;

    //the new keyword allocates memory.

    {

        int *p = new int;

        *p = 50;

        cout << *p << endl;

        delete p; // this deletes memory.
        if (p! = NULL)
        {
            *p = 60
            cout << p << endl;
        }

    }

    return 0;
}
