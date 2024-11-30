#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> hashMap;
    hashMap['k'] = 0;
    hashMap['b'] = 0;
    string inp;

    cin >> inp;

    for (int i = 0; i < inp.size(); i++) {
        char ele = inp[i];
        if (hashMap.find(ele) != hashMap.end()) {
            hashMap[ele]++;
        } 
    }

    if (hashMap['b'] > hashMap['k']) {
       cout << "boba" << endl;
    } else if (hashMap['k'] > hashMap['b']) {
        cout << "kiki" << endl;
    } else if ((hashMap['b'] != 0 && hashMap['k'] != 0) && hashMap['b'] == hashMap['k']) {
        cout << "boki" << endl;
    } else {
        cout << "none" << endl;
    }
}