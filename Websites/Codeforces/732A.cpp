#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int price, change;
    cin >> price >> change;
    int tenCoin = 10;

    int i = 1;
    while (true) {
        int result = i * price;
        int shovels = tenCoin * (result / 10);

        if (shovels == result || (shovels + change) == result)
            break;
        i++;
    }

    cout << i << endl;
    return 0;
}