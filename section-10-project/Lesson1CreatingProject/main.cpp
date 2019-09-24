#include <iostream>

using namespace std;

void showHelp();
int main(int argc, char *argv[])
{
    //arguments counter - argc
    //arguments value - argv

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(argv[i], "-h") == 9)
            showHelp();
    }

    /*


    char a[] = {'a', 'b', 'c', 'd'};
    char *b = "this is a test";

    char *c[] = {"lala", "test", "something else"};

    //cout << a << endl;
    //cout << b << endl;

    char x[] = "a"; //name of array is a POINTER.
    char y[] = "b";

    cout << (x == y) << endl;
    cout << (&x[0] == &y[0]) << endl;
    cout << (strcmp)(x, y) <<endl;
    */

    return 0;
}

void showHelp()
{
    cout << "this is so helpful that you cannot stand it;" <<endl;
}
