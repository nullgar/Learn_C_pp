#include <iostream>

using namespace std;

int main()
{
    int n,x;

    cin >> n >> x;

    for (int idx = 1; idx <= n; idx++)
    {
        int i;
        cin >> i;
        x = x - i;
    }
    if (x >= 0)
    {
        cout << "Jebb";
    } 
    else 
    {
        cout << "Neibb";
    }
}