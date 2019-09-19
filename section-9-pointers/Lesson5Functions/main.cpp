#include <iostream>

using namespace std;

//void multiplyBy(int &, int);
int *multiplyBy(int *, int);
int main()
{
    int a = 10;

    int *b = multiplyBy(&a, 5);

    *b = 999;
    cout << a << endl;
    cout << b << endl;

    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = i;
        count << array[i] << endl;
    }

    return 0;
}

int * multiplyBy(int * var, int amount)
{
    *var *= amount;

    return *var;
}
