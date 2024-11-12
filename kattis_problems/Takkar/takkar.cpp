#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cin >> a >> b;

    if (a > b)
        cout << "YAY!";
    else if (b > a)
        cout << "NO!";
    else
        cout << "TIE!";
}