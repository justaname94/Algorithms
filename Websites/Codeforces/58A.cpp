
#include <iostream>
#include "string"
using namespace std;

int main() {
    string word;
    cin >> word;

    string newWord = "";
    string hello = "hello";
    int lettersToHello = 0;

    for (int i = 0; i < word.length(); i++) {
        if (newWord == hello)
            break;

        if (word[i] == hello[lettersToHello]) {
            newWord += word[i];
            lettersToHello++;
        }
    }

    if (newWord == hello)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    
    return 0;
}