#include <iostream>
#include <vector>


using namespace std;


int main() 
{
    string input;
    int n;

    cin >> input;

    for (int i = 0; i < input.length() - 1; i++)
    {
        char c = input[i];
        if (c == 'u')
        {
            n++;
        }
    }

    cout << n;
}