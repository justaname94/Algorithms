#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    string winner;

    if (min(x, y) % 2 != 0) {
        winner = "Akshat";
    }
    else {
        winner = "Malvika";
    }


    cout << winner << endl;

    return 0;
}