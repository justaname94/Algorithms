#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void) {
    long long num;
    cin >> num;
    long digits = 0;

    while (num != 0) {
        int digit = num % 10;
        if ( (digit == 4) || (digit == 7)) {
            digits++;
        }
        num = num / 10;
    }

    bool isNearlyLucky = false;
    vector<int> luckyNumbers = {4, 7, 47};
    for (int i = 0; i < 3; i++) {
        if (digits == luckyNumbers[i]) {
            isNearlyLucky = true;
            break;
        }
    }
    (isNearlyLucky) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}