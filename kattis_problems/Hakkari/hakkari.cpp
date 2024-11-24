#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r,c,o=0;
    string data;
    vector<vector<int>> mines;

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        cin >> data;
        for (int j = 0; j < c; j++)
        {
            char ele = data[j];
            if (ele == '*') {
                vector<int> new_row = {i+1,j+1};
                mines.push_back(new_row);
                o += 1;
            }
        }
    }
    cout << o << endl;
    for(int m = 0; m < mines.size(); m++)
    {
        for (int n = 0; n < mines[m].size() - 1; n++)
        {
            cout << mines[m][n] << " " << mines[m][n + 1] << endl;
        }
    }
}