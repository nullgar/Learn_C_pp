#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> moduloMap;

int main()
{
    int n;
    int unique = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        int element = n % 42;
        if ((moduloMap[element] == NULL) )
        {
            moduloMap[element] = 1;
        } 
        else if (moduloMap[element] != NULL)
        {
            moduloMap[element]++;
        }
    }

    for (auto map: moduloMap)
    {
        unique++;
    }

   
    cout << unique;
}