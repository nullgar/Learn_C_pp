#include <iostream>

using namespace std;

int main()
{
    int n,r,e,c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> r >> e >> c;
        int netCostToAdvertise = e - c;
        if (r < netCostToAdvertise)
        {
            cout << "advertise \n";
        }
        else if (r == netCostToAdvertise)
        {
            cout << "does not matter \n";
        }
        else 
        {
            cout << "do not advertise \n";
        }
    }
}