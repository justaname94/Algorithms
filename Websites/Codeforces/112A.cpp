#include <iostream>
#include "string"

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i++) {
        int char1 = tolower(str1[i]);
        int char2 =  tolower(str2[i]);

        if (char1 > char2) {
            cout << "1" << endl;
            return 0;
        }
        else if (char1 < char2) {
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << "0" << endl;
    return 0;
}