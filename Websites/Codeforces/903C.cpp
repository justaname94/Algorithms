#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numOfBoxes;
    cin >> numOfBoxes;
    vector<long> boxes;

    long box;
    for (int i = 0; i < numOfBoxes; i++) {
        cin >> box;
        boxes.push_back(box);
    }

    sort(boxes.begin(), boxes.end());

    int minBoxes = 0;
    vector<bool> memorization(numOfBoxes, false);
    for (int i = 0; i < numOfBoxes; i++) {
        if (memorization[i])
            continue;
        long currentBox = boxes[i];
        for (int j = i+1; j < numOfBoxes; j++) {
            if (memorization[j])
                continue;

            long nextBox = boxes[j];
            if (currentBox < nextBox) {
                currentBox = nextBox;
                memorization[j] = true;
            }
        }
        memorization[i] = true;
        minBoxes++;
    }

    cout << minBoxes << endl;

    return 0;
}