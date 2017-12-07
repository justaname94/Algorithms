#include <iostream>
#include <set>
using namespace std;

int main()
{
    int levels;
    int xLevels;
    set<int> completableLevels;
    cin >> levels >> xLevels;

    int level;
    for (int i = 0; i < xLevels; i++) {
        cin >> level;
        completableLevels.insert(level);
    }

    int yLevels;
    cin >> yLevels;
    for (int i = 0; i < yLevels; i++) {
        cin >> level;
        completableLevels.insert(level);
    }

    if (completableLevels.size() == levels) {
        cout << "I become the guy" << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }


    return 0;
}
