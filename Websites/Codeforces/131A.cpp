#include <iostream>
#include "string"
using namespace std;

int main() {
    string words;
    cin >> words;

    char firstLetter = words[0];
    bool isFirstLetterLower = firstLetter == tolower(firstLetter);
    bool hasLowerCase = false;

    for (int i = 1; i < words.length(); i++) {
        hasLowerCase = words[i] == tolower(words[i]);

        if (hasLowerCase)
            break;
    }

    if (isFirstLetterLower && !hasLowerCase)
    {
        words[0] = toupper(words[0]);

        for (int i = 1; i < words.length(); i++) {
            words[i] = tolower(words[i]);
        }
    } else if (!isFirstLetterLower && !hasLowerCase) {
        for (int i = 0; i < words.length(); i++) {
            words[i] = tolower(words[i]);
        }
    }

    cout << words << endl;
//    (isFirstLetterLower && hasLowerCase)
}