
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int days;
    cin >> days;
    vector<int> money;
    int n;
    for (int i = 0; i < days; i++) {
        cin >> n;
        money.push_back(n);
    }

    int longestSequence = 1;
    int sequence = 1;
    for (int i = 0; i < days-1; i++) {
        int currentNumber = money[i];
        int nextNumber = money[i+1];

        if (currentNumber <= nextNumber) {
            sequence++;
            longestSequence =
                (longestSequence < sequence)
                ? sequence : longestSequence;
        } else {
            sequence = 1;
        }

    }

    cout << longestSequence << endl;

    return 0;
}