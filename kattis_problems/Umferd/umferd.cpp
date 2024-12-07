#include <iostream>

using namespace std;

int main() {
    float m,n,e=0,c=0;
    string value;

    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;
        for (int j = 0; j < m; j++) {
            char ele = value[j];
            if (ele == '.') {
                e++;
            } 
            
            c++;
        }
    }
    
    cout << e / c << endl;
}