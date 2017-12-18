#include <iostream>
#include <vector>

using namespace std;

int main() {
    int candles, newCandle;
    cin >> candles >> newCandle;

    int remaining = 0;
    int hours = 0;

    while (candles > 0) {
        candles--;
        hours++;
        remaining++;
        if (remaining == newCandle) {
            candles++;
            remaining = 0;
        }

    }

    cout << hours << endl;

    return 0;
}