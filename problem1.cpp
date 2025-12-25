#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num % 2 != 0)
        cout << "It is odd number." << endl;
    else
        cout << "It is even number." << endl;

    return 0;
}