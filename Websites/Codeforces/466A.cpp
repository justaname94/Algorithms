#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numRides, mRides, oneRidePrice, mRidesPrice;

    cin >> numRides >> mRides >> oneRidePrice >> mRidesPrice;

    int minCost = 0;

    if (mRides * oneRidePrice <= mRidesPrice) {
        minCost = numRides * oneRidePrice;
    } else {
        minCost = (numRides/mRides) * mRidesPrice + min((numRides % mRides) * oneRidePrice, mRidesPrice);
    }


    cout << minCost << endl;

    return 0;
}