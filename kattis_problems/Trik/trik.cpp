#include <iostream>
#include <map>

using namespace std;

int main() {
    map<char,map<int,int>> moveMap;
    map<int,int> positionMapA;
    map<int,int> positionMapB;
    map<int,int> positionMapC;

    int position = 1;
    string directions;

    positionMapA[1] = 2;
    positionMapA[2] = 1;
    positionMapB[2] = 3;
    positionMapB[3] = 2;
    positionMapC[1] = 3;
    positionMapC[3] = 1;
    moveMap['A'] = positionMapA;
    moveMap['B'] = positionMapB;
    moveMap['C'] = positionMapC;

    cin >> directions;

    for (int i = 0; i < directions.size(); i++) {
        char currentMove = directions[i];
        int currentPosition = moveMap[ currentMove ][position];
        //Un-comment line 31 to understand the moves as they happen.
        //cout << currentMove << ": " << position << " ====> " << currentPosition << endl;
        if (currentPosition == 0) {
            continue;
        } else {
            position = currentPosition;
        }
    }

    cout << position << endl;
}