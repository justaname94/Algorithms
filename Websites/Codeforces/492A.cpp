#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    int result = 0;
    if (n >= 1 && n <= 3)
        result = 1;
    else if (n >= 4 && n < 10)
        result = 2;
    else {
        result = 3;
        int counter = 10;
        int floor = 6;
        int i = 4;
        while (true) {
            floor = floor + i;
            counter += floor;

            if (counter > n) {
                break;
            }
            i++;
            result++;
        }
    }

    cout << result << endl;

    return 0;
}