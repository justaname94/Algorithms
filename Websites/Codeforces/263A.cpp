#include <iostream>
#include "string"
using namespace std;

int main() {
    int array[5][5];
    int posX = 0;
    int posY = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> array[i][j];
            if (array[i][j] == 1) {
                posX = i;
                posY = j;
            }
        }
    }
    int steps = 0;
    while(true) {
        if (posX == 2 && posY == 2)
            break;

        if (posX < 2) {
            ++posX;
            steps++;
        } else if (posX > 2) {
            --posX;
            steps++;
        }

        if (posY < 2) {
            ++posY;
            steps++;
        } else if (posY > 2) {
            --posY;
            steps++;
        }
    }

    cout << steps << endl;

    return 0;
}