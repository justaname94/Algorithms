#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int r, b;
    cin >> r >> b;

    int differentSocks = 0;
    while (r >= 1 && b >= 1) {
        r--;
        b--;
        differentSocks++;
    }

    int nonEmptySocks = (r == 0) ? b : r;

    int sameSock = 0;
    while (nonEmptySocks >= 2) {
        nonEmptySocks -= 2;
        sameSock++;
    }

    cout << differentSocks << " " << sameSock << endl;
    
    return 0;
}
