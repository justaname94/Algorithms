#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

struct meatDay {
    int amount;
    int price;
};

int main() {
    int days;
    cin >> days;
    vector<meatDay> meatDays;

    int lowestPrice = INT_MAX;
    int lowestDay;
    for (int i = 0; i < days; i++) {
        int amount;
        int price;
        cin >> amount >> price;

        meatDay meat;
        meat.amount = amount;
        meat.price = price;

        if (price < lowestPrice) {
            lowestPrice = price;
            lowestDay = i;
        }

        meatDays.push_back(meat);
    }

    int lastLowestDay = days;
    int moneyNeeded = 0;
    while (true) {
        for (int i = lowestDay; i < lastLowestDay; i++) {
            int lowestMeatPrice = meatDays[lowestDay].price;
            meatDay day = meatDays[i];
            moneyNeeded += day.amount * lowestMeatPrice;
        }

        lastLowestDay = lowestDay;
        lowestPrice = INT_MAX;

        if (lastLowestDay == 0)
            break;

        for (int i = 0; i < lastLowestDay; i++) {
            int price = meatDays[i].price;
            if (price < lowestPrice) {
                lowestPrice = price;
                lowestDay = i;
            }
        }
    }

    cout << moneyNeeded << endl;

}