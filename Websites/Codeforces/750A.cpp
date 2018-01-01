#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int m = 240;
    int t = 0;
    int ps = 0;
    int i = 1;
    while (true) {

        int tt = i * 5;
        t += tt;
        ps++;
        if (t + k > m) {
            ps--;
            break;
        }

        if (ps == n) {
            break;
        }


        i++;
    }

    cout << ps << endl;
    return 0;
}