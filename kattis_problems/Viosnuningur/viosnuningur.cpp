#include <iostream>

using namespace std;

int main()
{
    string input;
    string output;
    
    cin >> input;

    for (int i = input.length() - 1; i >= 0; i--)
    {
        output += input[i];
    }
    
    cout << output;
}