#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int rooms;
    cin >> rooms;

    int availableRooms = 0;
    for (int i = 0; i < rooms; i++) {
        int people, capacity;
        cin >> people >> capacity;

        if ((capacity - people) >= 2)
            availableRooms++;
    }

    cout << availableRooms << endl;

    return 0;
}