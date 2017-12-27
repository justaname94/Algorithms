#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int numLetters;
    string str;
    cin >> numLetters >> str;
    set<char> letters;

    for (int i  =0; i < numLetters; i++) {
        char letter = tolower(str[i]);
        letters.insert(letter);
    }

    string isPanagram = (letters.size() == 26) ? "YES" : "NO";

    cout << isPanagram << endl;

    return 0;
}