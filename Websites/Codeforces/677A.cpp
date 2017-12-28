#include <iostream>
using namespace std;

int main() {
    int numFriends, fenceHeight;
    cin >> numFriends >> fenceHeight;

    int width = 0;
    for (int i = 0; i < numFriends; i++) {
        int height;
        cin >> height;

        if (height > fenceHeight) {
            width++;
        }
        width++;
    }

    cout << width << endl;

    return 0;
}
