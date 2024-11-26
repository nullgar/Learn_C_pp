#include <iostream>

using namespace std;

int main() {
    int n,m;
    char ele;
    string result;
    cin >> n >> m;


    for (int i = 1; i <= m; i++) {
        
        for (int j = 1; j <=n; j++) {
            cin >> ele;
            if (ele != '.') {
                result += ele;
            }
        }
    }

    cout << result;
}