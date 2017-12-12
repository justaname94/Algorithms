#include <iostream>
using namespace std;

int main() {
    int pointsN;
    cin >> pointsN;
    int pointsLeft = 0;
    int pointsRight = 0;
    string result = "NO";
    for (int i = 0; i< pointsN;i++) {
        int pointX;
        int pointY;
        cin >> pointX >> pointY;

        if (pointX < 0) {
            pointsLeft++;
        } else {
            pointsRight++;
        }
    }

    if (pointsLeft <= 1 && pointsRight >= 0) {
        result =  "YES";
    }

    if (pointsRight <= 1 && pointsLeft >= 0) {
        result =  "YES";
    }
    cout << result << endl;

    return 0;
}