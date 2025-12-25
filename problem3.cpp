#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "It is upperCase letter.\n";
    else
        cout << "It is lowerCase letter.\n";

    return 0;
}