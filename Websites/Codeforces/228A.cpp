#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> shoes;

    for (int i = 0; i < 4; i++) {
        int shoe;
        cin >> shoe;
        shoes.insert(shoe);
    }

    int operation = shoes.size() -4;
    int result = abs(operation);
    cout << result<< endl;

    return 0;
}