#include <iostream>

using namespace std;

int main() {
    int n;
    string offer;

    cin >> n;

    if (n == 2) {
        cout << "blandad best" << endl;
        n = 0;
    }
    while (n--) {
        cin >> offer;
        
        cout << offer << endl;

    }
}