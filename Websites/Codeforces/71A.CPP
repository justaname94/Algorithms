#include <iostream>
#include <string>
using namespace std;

int main() {
    int count;
    cin >> count;
    string str;
    string results[count];

    for (int i = 0; i < count; i++) {
        cin >> str;
        if (str.length() > 10) {
            string first_letter = string(1, str[0]);
            string last_letter = string(1, str[str.length()-1]);
            int string_digits = str.length() - 2;
            str = first_letter + to_string(string_digits) + last_letter;
        }
        results[i] = str;
    }

    for(int i = 0; i < count; i++) {
        cout << results[i] << endl;
    }

    return 0;
}