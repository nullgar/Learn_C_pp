#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    unordered_map<string,int> cityMap;
    string city;
    cin >> n;
    for (int i = 0; i < n*2; i++) {
        cin >> city;
        if (i%2 != 0 && cityMap.find(city) != cityMap.end()) {
            cityMap[city]++;
        } else if (i%2 != 0 && cityMap.find(city) == cityMap.end()) {
            cityMap[city] = 1;
        }
    }

    for (auto const& data : cityMap) {
        cout << data.first << " " << data.second << endl;
    }
}