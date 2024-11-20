#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,o,b=1;
    string binaryString;
    cin >> n;

    while (n)
    {
        binaryString += n % 2;
        n = n/2;
    }

    for (int i = binaryString.size() - 1; i >= 0; i--)
    {
        o += static_cast<int>(binaryString[i]) * b;
        b = b * 2;
    }

    cout << o << endl;

    return 0;
}