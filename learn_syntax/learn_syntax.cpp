#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    vector<string> vec1 {"Orange", "Green", "Black"};

    vector<string> vec2 {"Orange", "from", "Black", "World"};

    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    // }

    // cout << endl;


    // for (int i = 0; i < vec1.size(); i++) {
    //     cout << vec1[i] << " ";
    // }

    // string update = "Cat";
    // int idx = 1;
    // for (int i = 0; i < vec1.size(); i++) {
    //     if (vec1[i] == "Green")
    //     {
    //         vec1[idx] = update;
    //     }
        
    //     cout << vec1[i] << " ";
    // }
   
    //compare vector1 to vector2 and in the instance when the element in arr1 == arr2 the return the word or words in a vector

    for (int i = 0; i < msg.size(); i++) {
        string val1 = msg[i];
        for (int j = 0; j < vec2.size(); j++) {
            string val2 = vec2[j];
            if (val1 == val2) {
                cout << val1 << " ";
            }
        }
    }
}