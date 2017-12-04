#include <iostream>
using namespace std;

int main() {
    int n, k, score, passed;
    cin >> n >> k;
    passed = 0;
    int scores[n];

    for (int i = 0; i < n; i++) {
        cin >> score;
        scores[i] = score;
    }

    for (int i = 0; i < n; i++) {
        if ((scores[i] >= scores[k-1]) && scores[i] > 0 ) {
            passed++;
        }
    }

    cout << passed << endl;
    return 0;
}