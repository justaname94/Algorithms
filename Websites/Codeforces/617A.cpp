#include <iostream>
using namespace std;
int main() {
    int distance;
    cin >> distance;

    int stepSize = 5;
    int travel = 0;
    int steps = 0;

    while (travel < distance) {
        if ((travel + stepSize) > distance) {
            stepSize--;
            continue;
        }
        travel += stepSize;
        steps++;
    }

    cout << steps << endl;

    return 0;
}