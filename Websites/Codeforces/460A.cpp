#include <iostream>
using namespace std;

int main() {
    int socks, daysToBuy;
    cin >> socks >> daysToBuy;

    int day = 1;
    int socksUsed = 0;
    while (socks >= 1) {
        socks--;
        socksUsed++;
        if (day % daysToBuy == 0)
            socks++;
        day++;
    }

    cout << socksUsed << endl;

    return 0;
}