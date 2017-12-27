#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numHouses, thingsToDo;
    cin >> numHouses >> thingsToDo;
    vector<int> houses;

    for (int i = 0; i < thingsToDo; i++) {
        int house;
        cin >> house;
        houses.push_back(house);
    }
    int pos = 1;
    long long time = 0;


    for (int i = 0; i < thingsToDo; i++) {
        int house = houses[i];

        int nextPos;

        while(true) {
            if (house < pos) {
                int distanceToEnd = abs(numHouses - pos);
                int distanceToPos = abs(house - 1);
                int totalDistance = distanceToEnd + distanceToPos + 1;
                pos = house;
                time += totalDistance;
            } else if (house > pos) {
                nextPos = abs((house) - pos);
                pos += nextPos;
                time += nextPos;
            } else {
                break;
            }
            break;
        }
    }

    cout << time << endl;

    return 0;
}