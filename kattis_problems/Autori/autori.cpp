#include <iostream>

using namespace std;

int main()
{
    string input,output;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '-') {
            output += input[i + 1];
        } else if (i == 0) {
            output += input[i];
        }

    }

    cout << output << endl;
}