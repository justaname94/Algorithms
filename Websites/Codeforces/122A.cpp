#include <iostream>

using namespace std;

int main(void) {
    int num;
    cin >> num;
    bool isAlmostLucky = false;
    double divisionBy4 = num / 4.0;
    double divisionBy7 = num / 7.0;
    double divisionBy47 = num / 47.0;

    if ((divisionBy4 == (int)divisionBy4) ||
        (divisionBy7 == (int)divisionBy7) ||
         (divisionBy47 == (int)divisionBy47))
        isAlmostLucky = true;

    bool isLucky = true;

    if (!isAlmostLucky) {
        while (num != 0) {
            int lastDigit = num % 10;
            if ((lastDigit != 4) && (lastDigit != 7)) {
                isLucky = false;
                break;
            }
            num = num / 10;
        }
    }

    if (isLucky || isAlmostLucky)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}