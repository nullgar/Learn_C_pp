#include <iostream>

using namespace std;

int main() {
    string i;
    int c=0,y=0;
    string vowels = "aeiou";

    cin >> i;

    for (int k = 0; k < i.size(); k++) {
        char ele;
        ele = i[k];
        
        if (vowels.find(ele, 0) != string::npos ) {
            c++;
            y++;
        } else if (ele == 'y') {
            y++;
        }
        
    }

    cout << c << " " << y << endl;
}