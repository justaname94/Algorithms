#include <iostream>

using namespace std;

int main() {
    int numGames;
    string games;
    cin >> numGames >> games;

    int anton = 0;
    int danik = 0;

    for (int i = 0; i < numGames; i++) {
        char game = games[i];

        if (game == 'A')
            anton++;
        else
            danik++;
    }

    string winner;
    if (anton == danik) {
        winner = "Friendship";
    } else {
        winner = (anton > danik) ? "Anton" : "Danik";
    }

    cout << winner << endl;

    return 0;
}