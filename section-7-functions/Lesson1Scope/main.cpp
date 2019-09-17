#include <iostream>

using namespace std;

//can access this throughout the whole program. Cannot use varaibles before they are declared.
int globalVariable = 5;

int main()
{
    //can only access this in curly brackets.
    int localVariable = 10;

    cout << "value of globalVaraible: " << globalVariable << endl;
    cout << "value of localVariable: " << localVariable << endl;

    int a = 10;

    if (a == 10)
    {
        int result = a * 10;
        //cannot access result outside if function;
    }

    int nr, result = 0;

    for (int i = 0; i < 3; i++) //3, 2, 3 - will the result be 8? NOOOOO
    {
        cout << "Enter " << (i + 1) << " number" << endl;
        cin >> nr;
        result += nr;
    }
    cout << result <<endl;
    //cannot access i outside.
}
