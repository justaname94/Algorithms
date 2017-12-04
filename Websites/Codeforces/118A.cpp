#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, character;
    cin >> word;
    string newWord;
    for (int i = 0; i < word.length(); i++) {
        char letter = char(tolower(word[i]));
        if (letter == 'a') {
            continue;
        }
        else if (letter == 'e') {
            continue;
        }
        else if (letter == 'i') {
            continue;
        }
        else if (letter == 'o') {
            continue;
        }
        else if (letter == 'u') {
            continue;
        }
        else if (letter == 'y') {
            continue;
        }

        string consonantWithDot = "." + string(1, letter);
        newWord += consonantWithDot;
    }
    cout << newWord << endl;
    return 0;
}