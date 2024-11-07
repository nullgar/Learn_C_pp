#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;



int main() {
    vector<int> vectorOfValues;
    vector<int> missingValue;
    
    string value;
    int v;
    int n; 

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v;
        vectorOfValues.push_back(v);
    }
    

    int endPoint = vectorOfValues.back();

    for (int idx1 = 1; idx1 <= endPoint; idx1++)
    {
        int ele = idx1;
        if (find(vectorOfValues.begin(), vectorOfValues.end(), idx1) == vectorOfValues.end())
        {
            missingValue.insert(missingValue.end(), idx1);
        }
    }

    if (missingValue.size() == 0)
    {
        cout << "good job";
    }
    else 
    {
        for (int idx = 0; idx < missingValue.size(); idx++)
        {
            cout << missingValue[idx] << " \n";
        }
    }

}