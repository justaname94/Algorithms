#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    string letter;
    string direction;
    cin >> direction >> letter;
    vector<char> keyboard = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd',
                             'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',',
                             '.', '/'};

    string result;
    if (direction == "R") {
        for (int i = 0; i < letter.length(); i++) {
            for (int j = 0; j < keyboard.size(); j++) {
                if (letter[i] == keyboard[j])
                    result += keyboard[j-1];
            }
        }
    } else {
        for (int i = 0; i < letter.length(); i++) {
            for (int j = 0; j < keyboard.size(); j++) {
                if (letter[i] == keyboard[j])
                    result += keyboard[j+1];
            }
        }
    }

    cout << result << endl;

    return 0;
}