#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    string username;
    cin >> username;

    vector<char> letters;

    for (int i = 0; i < username.length(); i++) {
        char letter = username[i];
        bool hasLetter = false;
        for (int i = 0; i < letters.size(); i++)
            if (letter == letters[i]) {
                hasLetter = true;
                break;
            }

        if (!hasLetter) {
            letters.push_back(letter);
        }
    }


    if ((letters.size() % 2) == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}