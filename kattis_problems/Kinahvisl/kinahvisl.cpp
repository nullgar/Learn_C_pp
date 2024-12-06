#include <iostream>

using namespace std;

int main() {
    string word;
    string sub_word;

    int n,o=1;
    
    cin >> word >> sub_word;;
    
    for (int i = 0; i < word.size(); i++) {
        char ele = word[i];
        char ele2 = sub_word[i];
        if (ele != ele2) {
            o++;
        }
    }
    
    cout << o << endl;
}