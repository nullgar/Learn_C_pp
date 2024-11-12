#include <iostream>

using namespace std;

int main()
{
    int n;
    string word;
    string reduplication;

    cin >> word >> n;

    for (int i = 0; i < n; i++)
    {
        reduplication += word;
    }

    cout << reduplication;
}