#include <iostream>

using namespace std;

int main() {
    int i,o,n;

    cin >> i;

    while (i--)
    {
        cin >> n;

        o += n - 1;   
    }

    cout << o << endl; 
}