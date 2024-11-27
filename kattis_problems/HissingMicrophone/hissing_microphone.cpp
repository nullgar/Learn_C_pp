#include <iostream>

using namespace std;

string input;
bool isHiss = false;
int main() {
    cin >> input;

    for (int i = 0; i< input.size() - 1; i++) {
        if (input[i] == 's' && input[i + 1] == 's') {
            isHiss = true;
            break;
        }
    }

    isHiss ? cout << "hiss" << endl :  cout << "no hiss" << endl;
}