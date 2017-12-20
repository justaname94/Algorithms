#include <iostream>
#include <vector>

using namespace std;

struct team {
    int homeUniform;
    int guestUniform;
};

int main() {
    int numOfTeams;
    vector<team> teams;
    cin >> numOfTeams;

    for (int i = 0; i < numOfTeams; i++) {

        team team;
        cin >> team.homeUniform;
        cin >> team.guestUniform;

        teams.push_back(team);
    }

    int homeUsingGuest = 0;
    for (int i = 0; i < numOfTeams; i++) {
        team homeTeam = teams[i];
        for (int j = 0; j < numOfTeams; j++) {
            if (j == i)
                continue;

            team guestteam = teams[j];

            if (homeTeam.homeUniform == guestteam.guestUniform) {
                homeUsingGuest++;
            }

        }
    }

    cout << homeUsingGuest << endl;

    return 0;
}