#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <map>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char color;
            cin >> color;
            if (
                color == 'B' ||
                color == 'G' ||
               color == 'W' 
            ) {
                continue;
            } else {
                cout << "#Color" << endl;
                return 0;
            }
        }
    }

    cout << "#Black&White" << endl;
    return 0;
}
