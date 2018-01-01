#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> seats;

    string answer = "NO";
    string result = "++";
    bool found = false;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        string firstPair = s.substr(0, 2);
        string secondPair = s.substr(3, 5);

        if (!found) {
            if (firstPair == "OO") {
                answer = "YES";
                s = result += "|" + secondPair;
                found = true;
            } else if (secondPair == "OO") {
                answer = "YES";
                s = firstPair += "|" + result;
                found = true;
            }
        }

        seats.push_back(s);
    }

    if (answer == "YES") {
        cout << answer << endl;
        for (int i = 0; i < n; i++) {
            cout << seats[i] << endl;
        }
    } else
        cout << answer << endl;

    return 0;
}