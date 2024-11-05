#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    vector<string> output {"VELKOMIN!"};

    for (int i = 0; i < output.size(); i++)
    {
        string value = output[i];
        cout << value;
    }
};
