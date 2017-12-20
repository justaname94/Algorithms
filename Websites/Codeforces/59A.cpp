#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int uppercase = 0;
    int  lowercase = 0;

    for (int i = 0; i < str.length(); i++) {
        (isupper(str[i])) ? uppercase++ : lowercase++;
    }

    string newStr;

    for (int i = 0; i < str.length(); i++) {
        newStr += (uppercase > lowercase) ? toupper(str[i]) : tolower(str[i]);
    }

    cout << newStr << endl;

    return 0;
}