#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <map>

using namespace std;
bool check(int index);

int main()
{
    int limak, bob;
    cin >> limak >> bob;

    int years = 0;
    while (limak <= bob) {
        limak *= 3;
        bob *= 2;
        years++;
    }

    cout << years << endl;

    return 0;
}
