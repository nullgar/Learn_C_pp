#include <iostream>

using namespace std;

int main() {
    int i,m;
    cin >> i;

    for (int j = 0; j < i; j++) {
        int f;
        cin >> f;

        if (j == 0) {
            m=f;
        }
        if (f <= m) {
            m = f;
        }
    }

    cout << m;
}