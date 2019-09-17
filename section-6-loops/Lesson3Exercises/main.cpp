#include <iostream>

using namespace std;

int main()
{
    int nr = 123456; // 4 digits
    int nrOfDigits = 1;

    cout << 1234 / 10.0 << endl; //returns 123.4
    cout << 123 / 10 << endl;
    cout << 12 / 10 << endl;
    cout << 1 / 10 << endl;

    int tmp = nr;

    while (nr /= 10)
        nrOfDigits++;

    cout << "the number " << tmp << " has " << nrOfDigits << " digits " << endl;

    for (int i =1; i < 10; i++)
    {
        for (int j = 1; j <= 10; j++)
            cout << i * j << " ";

        cout << endl;
    }

}
