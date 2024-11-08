#include <iostream>

using namespace std;

int main()
{
    string n;

    cin >> n;

    stoi(n) % 2 == 1 ? cout << "Alice" : cout << "Bob";

}