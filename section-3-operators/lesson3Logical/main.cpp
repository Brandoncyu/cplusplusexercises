#include <iostream>

using namespace std;

int main()
{
    cout << (5 > 7 && 5 != 10) << endl;
    cout << (5 > 7 || 5 != 10) << endl;
    cout << !(5 > 7 || 5 != 10) << endl;
}
