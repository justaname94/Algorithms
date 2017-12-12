#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    vector<int> cases;
    int chickenCase;
    vector<string> answers;
    int smallChicken = 3;
    int bigChicken = 7;

    int currentCase;
    for (int i = 0; i < testCases; i++) {
        cin >> currentCase;
        cases.push_back(currentCase);

        if ((currentCase % 3 == 0) || (currentCase % 7 == 0))
            answers.emplace_back("YES");
        else if (true) {
            bool right = false;
            int times3;
            int times7;
            for (int j = 1; j <= (currentCase / 3); j++ ) {
                times3 = j * 3;
                for (int k = 1; k <= (currentCase / 7); k++) {
                    times7 = k * 7;
                    if (times3+times7 == currentCase) {
                        answers.emplace_back("YES");
                        right = true;
                        break;
                    }
                }
            }
            if (!right) {
                answers.emplace_back("NO");
            }
        }
    }

    for (int i = 0; i < testCases; i++) {
        cout << answers[i] << endl;
    }

    return 0;

}