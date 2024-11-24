#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,o=0;
    string input;
    map<string, int> orderedMap;
    orderedMap["keys"]  = 0;
    orderedMap["phone"] = 0;
    orderedMap["wallet"] = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (orderedMap.find(input) != orderedMap.end()) {
            orderedMap[input]++;
        }
    }

    for (auto data: orderedMap) {
        if (data.second == 0){
            cout << data.first << endl;
        } else if (data.second <= 1) {
            o += 1;
        }
    }

   if (o == 3)
        cout << "ready";
        
   return 0;
}