#include <iostream>
using namespace std;

int main() {
    string word, result;
    cin >> word;

    char upper = toupper(word[0]);
    cout << upper + word.substr(1) << endl;

    return 0;
}