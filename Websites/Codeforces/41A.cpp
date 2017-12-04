#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string word, reversedWord;
    cin >> word >> reversedWord;
    string reversed = word;
    reverse(reversed.begin(), reversed.end());

    if (reversedWord == reversed)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}