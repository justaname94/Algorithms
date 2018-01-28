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
    int events;
    cin >> events;
    int recruits = 0;
    int untreatedCrimes = 0;
    for (int i = 0; i < events; i++) {
        int crime;
        cin >> crime;
        if (crime < 0) {
            if (recruits < 1)
                untreatedCrimes++;
            if (recruits > 0)
                recruits--;            
        } else {
            recruits += crime;
        }
    }

    cout << untreatedCrimes << endl;

    return 0;
}
