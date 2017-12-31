#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numContests;
    cin >> numContests;
    vector<int> scores;

    for (int i = 0; i < numContests; i++) {
        int score;
        cin >> score;
        scores.push_back(score);
    }

    int amazingPerformances = 0;

    int highestScore = scores[0];
    int lowestScore = scores[0];
    for (int i = 1; i < numContests;i++) {
        int score = scores[i];
        if (score > highestScore) {
            amazingPerformances++;
            highestScore = score;
        }

        if (score < lowestScore) {
            amazingPerformances++;
            lowestScore = score;
        }

    }

    cout << amazingPerformances << endl;
}