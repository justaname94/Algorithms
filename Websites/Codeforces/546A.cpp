#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int price, money, quantity;
    cin >> price >> money >> quantity;
    int moneyToBorrow = 0;
    int total = 0;

    for (int i = 0; i < quantity; i++) {
        total += (i+1)*price;
    }

    moneyToBorrow = (total - money) > 0 ? total - money : 0;

    cout << moneyToBorrow << endl;

    return 0;
}