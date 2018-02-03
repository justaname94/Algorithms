#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> v;
    int m = -1;

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        m = (x > m) ? x : m; 
        v[x]++;
    }

    int r = 0;
    int y;
    for (auto i : v) {
        y = m - i.first;
        r += y * i.second;
    }

    cout << r << endl;

    return 0;
}
