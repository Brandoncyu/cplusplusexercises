#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    while(i < 10)
    {
        cout << "lalal" << endl;
        i++;
    }

    while(i)
    {
        cout << i-- << endl;
    }

    int j = 1;

    do
    {
        cout << --j << endl;
    } while(j);



}
