#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> message {"Hello,", "World!"};

    for (int i = 0; i < message.size(); i++) {
        string value = message[i];
        cout << value << " ";
    }

}