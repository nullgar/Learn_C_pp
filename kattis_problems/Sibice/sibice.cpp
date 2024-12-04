#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int c,w,h,i;
    double l;
    cin >> c >> w >> h;
    
    l = sqrt((w * w) + (h * h));

    for (int n = 0; n < c; n++) {
        cin >> i;
        
        i <= l ? cout << "DA" << endl : cout << "NE" << endl;
    }
}
