#include <iostream>
#include <set>
#include <vector>
#include "string"

using namespace std;

int main() {
    int numCells, destination;
    cin >> numCells >> destination;
    vector<int> cells;

    for (int i = 0; i < numCells-1; i++) {
        int cell;
        cin >> cell;
        cells.push_back(cell);
    }

    string canGoToDestination = "NO";

    int road = 0;
    int i = 1;
    while (road < numCells) {
        road = cells[i-1] + i;
        if (road == destination) {
            canGoToDestination = "YES";
            break;
        }
        i = road;
    }


    cout << canGoToDestination << endl;

    return 0;
}