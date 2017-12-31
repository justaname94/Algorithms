#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string cards;
    cin >> cards;

    vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
    vector<char> digits = { '1', '3', '5', '7', '9' };

    int turns = 0;
    for (int i = 0; i < cards.length(); i++) {
        char card = cards[i];

        if (isdigit(card)) {
            for (int j = 0; j < digits.size(); j++) {
                if (card == digits[j]) {
                    turns++;
                    continue;
                }
            }
        } else {
            for (int j = 0; j < vowels.size(); j++) {
                if (card == vowels[j]) {
                    turns++;
                    continue;
                }
            }
        }

    }

    cout << turns << endl;

}