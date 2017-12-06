#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numSoldiers;
    cin >> numSoldiers;

    vector<int> soldiers;

    int maxHeight = 0;
    int maxHeightPos = 0;
    int minHeight = 1e9;
    int minHeightPos = 0;

    int soloSoldier;
    for (int i = 0; i < numSoldiers; i++) {
        cin >> soloSoldier;
        soldiers.push_back(soloSoldier);

        if (maxHeight < soloSoldier) {
            maxHeight = soloSoldier;
            maxHeightPos = i;
        }
        maxHeight = (maxHeight < soloSoldier) ? soloSoldier : maxHeight;
        if (minHeight >= soloSoldier) {
            minHeight = soloSoldier;
            minHeightPos = i;
        }
    }

    int distanceToEnd = (minHeightPos)-(soldiers.size()-1);
    int distance = abs( distanceToEnd );
    int distanceToBeginning = 0;
    if (minHeightPos > maxHeightPos)
        distanceToBeginning = maxHeightPos;
    else
        distanceToBeginning = maxHeightPos-1;

    cout << distance + distanceToBeginning<< endl;
    return 0;
}