#include <iostream>
#include "string"
using namespace std;

int main() {
    string command;
    cin >> command;
    int instructionsNum = 3;

    char isValidInstruction = false;

    for (int i = 0; i < command.length(); i++) {
        if (isValidInstruction)
            break;

        char character = command[i];

        if ( ((character == 'H') ||
                (character == 'Q') ) ||
                (character == '9'))
            isValidInstruction = true;
    }

    if (isValidInstruction)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}