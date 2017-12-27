#include <iostream>
#include <set>
#include "string"

using namespace std;

int main() {
    string str;
    getline(cin, str);

    set<char> letters;
    for (int i = 1;i < str.length()-1; i+=3) {
        char letter = str[i];
        letters.insert(letter);
    }

    cout << letters.size() << endl;



    return 0;
}