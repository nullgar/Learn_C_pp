#include <iostream>
#include <unordered_map>
#include <ctype.h>

using namespace std;

int nVowels=0;
string word;
unordered_map<char,char> vowels;


int main() {
    vowels['a'] = 'a';
    vowels['e'] = 'a';
    vowels['i'] = 'a';
    vowels['o'] = 'a';
    vowels['u'] = 'a';

    getline(cin, word);

    for (int i = 0; i < word.size(); i++) {
        char ele = tolower(word[i]);
        
        if (vowels[ele]) {
            nVowels++;
        }
    }

    cout << nVowels << endl;
}