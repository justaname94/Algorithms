#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int lastDigit = n % 10;

    if (lastDigit >= 5) {

        while (lastDigit != 0) {
            n++;
            lastDigit = n % 10;
        }
    } else {
        while (lastDigit != 0) {
            n--;
            lastDigit = n % 10;
        }
    }

    cout << n;

    return 0;
}