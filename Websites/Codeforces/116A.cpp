#include <iostream>
using namespace std;

int main() {
    int stops;
    cin >> stops;

    int people = 0;
    int maxPeople = 0;

    for (int i = 0; i < stops; i++) {
        int peopleOut, peopleIn;
        cin >> peopleOut >> peopleIn;
        people += peopleIn - peopleOut;

        maxPeople = (people > maxPeople) ? people : maxPeople;
    }

    cout << maxPeople << endl;
}