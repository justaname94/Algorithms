#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    vector<int> damageWays(4);
    for (int i = 0; i < 4; i++) {
        int damage;
        cin >> damage;
        damageWays[i] = damage;
    }
    int dragons;
    cin >> dragons;
    set<int> dragonsDamaged;

    for (int i = 0; i < 4; i++) {
        int damagingInterval = damageWays[i];
        int interval = damageWays[i];
        while (damagingInterval <= dragons) {
            dragonsDamaged.insert(damagingInterval);
            damagingInterval += interval;
        }
    }

    cout << dragonsDamaged.size() << endl;

    return 0;
}