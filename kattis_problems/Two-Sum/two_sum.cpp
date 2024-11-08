#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    string b;
    int n1;
    int n2;
    bool trigger = false;

    string input;

    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        char val = input[i];
    
        if (val == ' ')
        {   
            trigger = true;
            continue;
        }
        if (!trigger)
        {
            a += val;
        }
        else if (trigger)
        {
            b += val;
        }
    }

    n1 = stoi(a);

    n2 = stoi(b);

    cout << n1 + n2;
}