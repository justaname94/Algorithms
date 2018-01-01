#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int maxNum = max(x1,x2);
    maxNum = max(maxNum, x3);

    int minNum = min(x1,x2);
    minNum = min(minNum, x3);

    cout << maxNum - minNum << endl;


    return 0;
}