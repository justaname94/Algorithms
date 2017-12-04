#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void) {
    int nCoins;
    cin >> nCoins;
    vector<int> coins;

    for (int i = 0; i < nCoins; i++) {
        int coin;
        cin >> coin;
        coins.push_back(coin);
    }

    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());

    int myCoinsSum = 0;
    int myCoinsN = 0;

    for (int i = 0; i < coins.size(); i++) {
        myCoinsSum += coins[i];
        myCoinsN++;
        
        int remainingCoins = 
                accumulate((coins.begin()+i+1), coins.end(),0);
        
        if (myCoinsSum > remainingCoins) {
            break;
        }
    }

    cout << myCoinsN << endl;

    return 0;
}