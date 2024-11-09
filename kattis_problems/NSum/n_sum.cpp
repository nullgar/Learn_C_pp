#include <iostream>
using namespace std;

int n;
int add;
int sum = 0;
int main()
{
    cin >> n; 
    for (int i = n; i > 0; i--)
    {
        cin >> add;
        sum += add;
    }
    cout << sum;
}