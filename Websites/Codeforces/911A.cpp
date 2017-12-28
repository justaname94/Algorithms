#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int numElements;
    cin >> numElements;
    vector<int> nums;

    int min = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < numElements; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
        if (num < min) {
            min = num;
            minIndex = i;
        }

    }

    vector<int> minTimes;
    minTimes.push_back(minIndex+1);
    for (int i = minIndex+1; i < numElements; i++) {
        if (nums[i] == min) {
            minTimes.push_back(i+1);
        }
    }

    int minDistance = INT_MAX;
    for (int i = 0; i < minTimes.size()-1; i++) {
        int distance = abs(minTimes[i+1] -minTimes[i]);
        minDistance = (distance < minDistance) ? distance : minDistance;
    }

    cout << minDistance << endl;

    return 0;
}