#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    vector<string> msg {"TIL", "HAMINGJU", "MED", "AFMAELID", "FORRITUNARKEPPNI", "FRAMHALDSSKOLANNA!"};
    
    for (int i = 0; i < msg.size(); i++)
    {
        string val = msg[i];
        if (i != msg.size())
        {
            cout << val << " ";
        } 
        else
        {
            cout << val;
        }
        
    }
}