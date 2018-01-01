#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main() {
    string n;
    cin >> n;

    string n2 = n.substr(0, n.length()-1);
    string n3 = n.substr(0, n.length()-2);
    string n4 = n.substr(n.length()-1, n.length());
    string n5 = n3 + n4;

    if (stoi(n2) > stoi(n5)) {
        if (stoi(n2) > stoi(n)) {
            cout << stoi(n2) << endl;
        } else {
            cout << stoi(n) << endl;
        }
    } else {
        if (stoi(n5) > stoi(n)) {
            cout << stoi(n5) << endl;
        } else {
            cout << stoi(n) << endl;
        }
    }

    return 0;
}