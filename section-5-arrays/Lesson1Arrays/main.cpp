#include <iostream>

using namespace std;

int main()
{
    int a;

    int arr[4]; //TYPE AME[SIZE_NUMBEROFELEEMENTS];
    //only four elements in the array

    arr[0] = 10;
    arr[1] = 50;
    arr[2] = 256;
    arr[3] = 512;
    //doing arr[4] would destroy the program. arr[4] does not exist.

    cout << "arr [0] = " << arr[0] << ", address: " << &arr[0] << endl;
    cout << "arr [1] = " << arr[1] << ", address: " << &arr[1] << endl;
    cout << "arr [2] = " << arr[2] << ", address: " << &arr[2] << endl;
    cout << "arr [3] = " << arr[3] << ", address: " << &arr[3] << endl;

    //the first array item's address is the same as the array.
    if (&arr[0] == arr)
        cout << "that's true";
}
