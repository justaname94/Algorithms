#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct dragon {
    int strength;
    int bonusDamage;
};


bool CompareDragons(const dragon& a, const dragon& b) {
    if (a.strength < b.strength) return true;
    if (b.strength < a.strength) return false;

    if (b.bonusDamage < a.bonusDamage) return true;
    if (a.bonusDamage < b.bonusDamage) return false;

    return false;
}

int main() {
    int strength;
    int numDragons;
    cin >> strength >> numDragons;
    vector<dragon> dragons;

    for (int i = 0; i < numDragons; i++) {
        int dragonStrength, dragonBonus;
        cin >> dragonStrength >> dragonBonus;
        dragon x;
        x.strength = dragonStrength;
        x.bonusDamage = dragonBonus;
        dragons.push_back(x);
    }

    sort(dragons.begin(), dragons.end(), &CompareDragons);
    string result = "YES";

    for (int i = 0; i < numDragons; i++) {
        dragon dragon = dragons[i];
        if (strength <= dragon.strength) {
            result = "NO";
            break;
        }

        strength += dragon.bonusDamage;
    }

    cout << result << endl;

    return 0;
}
