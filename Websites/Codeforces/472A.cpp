#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int x,y;
    int division = number / 2;
    if (number % 2 == 0) {
        if (division % 2 == 0) {
            x = y = division;
        } else {
            x = division - 1;
            y = division + 1;
        }
    } else {
        if (division % 2 == 0) {
            x = division - 2;
            y = division + 1;
        } else {
            x = division - 1;
            y = division;

        }

        while (y % 3 != 0) {
            y++;
        }

        while ((x + y) != number) {
            x -= 2;
            y += 3;
            // Forced
            if (x < 3) {
                x += 2;
                while ((x + y) != number) {
                    x += 2;
                    y -= 3;
                }
                break;
            }
        }
    }

    cout << x << " " << y << endl;
    return 0;
}