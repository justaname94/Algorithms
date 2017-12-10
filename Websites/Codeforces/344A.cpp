#include <iostream>
using namespace std;

int main()
{
    int quantity;
    cin >> quantity;

    int lastMagnet;
    cin >> lastMagnet;
    int groups = 1;
    int magnet;
    for (int i = 1; i < quantity; i++) {
        cin >> magnet;
        if (lastMagnet != magnet)
            groups++;
        lastMagnet = magnet;
    }

    cout << groups << endl;
}