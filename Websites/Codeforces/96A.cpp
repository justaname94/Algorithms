#include <iostream>
#include "string"
using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    char lastCharacter = sequence[0];
    int count =  1;
    bool inDanger = false;
    for (int i = 1; i < sequence.length(); i++) {
        char character = sequence[i];
        if (character == lastCharacter)
            count++;
        else {
            count = 1;
            lastCharacter = character;
        }

        if (count >= 7) {
            inDanger = true;
            break;
        }
    }

    if (inDanger) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}