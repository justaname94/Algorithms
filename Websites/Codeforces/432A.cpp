#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;


int main()
{
    int numPeople, times;
    cin >> numPeople >> times;
    vector<int> people;

    int teamAmount = 0;
    int teams = 0;
    for (int i = 0; i < numPeople; i++) {
        int person;
        cin >> person;
        if (person + times <= 5) {
            teamAmount++;
            if (teamAmount == 3) {
                teamAmount = 0;
                teams++;
            }
        }
    }

    cout << teams << endl;
    return 0;
}
