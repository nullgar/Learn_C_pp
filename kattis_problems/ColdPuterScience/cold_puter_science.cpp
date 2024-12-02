#include <iostream>

using namespace std; 

int main() {
    int n,c = 0;
    int element;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> element;
        if (element < 0) {
            c++;
        }
        
    }

    cout << c;
}