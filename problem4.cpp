#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "It is vowel.\n";
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << "It is vowel.\n";
    else
        cout << "It is consonant.\n";

    return 0;
}