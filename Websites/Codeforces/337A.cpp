#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int students, puzzlesNum;
    cin >> students >> puzzlesNum;
    vector<int> puzzles(puzzlesNum);

    for (int i = 0;i < puzzlesNum; i++) {
        int puzzle;
        cin >> puzzle;
        puzzles[i] = puzzle;
    }

    sort(puzzles.begin(), puzzles.end());
    int min = 1e9;

    int i = 0;
    do {
        int minSet = puzzles[i+(students-1)] - puzzles[i];
        if (minSet < min)
            min = minSet;
        i++;
    } while ((i+students) <= puzzlesNum);

    cout << min << endl;

    return 0;
}