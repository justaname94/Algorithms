#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <map>
#include <set>

using namespace std;
bool isFib(int x);

int main()
{
    int n;
    cin >> n;
    string result;
    
    for (int i = 1; i <= n; i++) {
        result += (isFib(i)) ? "O" : "o";
    }

    cout << result << endl;

    return 0;
}

bool isFib(int x) {
    int w = 0;
    int y = 1;
    while (y <= x) {
        int z = w + y;
        w = y;
        y = z;
        if (z == x)  {
            return true;
        }
    }
    return false;
} 