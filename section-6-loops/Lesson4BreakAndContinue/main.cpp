#include <iostream>

using namespace std;

int main()
{

    /*
    for (int i =1; i <= 10; i++) //amount of rows, length of column
    {
        if (i == 5)
            continue; //everything AFTER continue WON'T be executed BUT LOOP CONTINUES
        */
        /*
        if (i == 5)
            break; //everything after break WON'T Be executed and the loop is broken.
        */

        /*
        for (int j = 1; j <= 10; j++) //amount of columns
        {
           cout.width(4);
           cout << i * j;
        }
        cout << endl;
    }
    */


    for (int i = 1, j = 1; i <= 10; i++)
    {
       cout.width(4);
       cout << i * j;

       if (i == 10)
       {
            j++;
            i = 0;
            cout << endl;
       }
       if (j == 11)
        break;
    }
}
