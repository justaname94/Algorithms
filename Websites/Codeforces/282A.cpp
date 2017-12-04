#include <iostream>
#include "string"
using namespace std;

int main() {
    int numStatements;
    cin >> numStatements;

    int x = 0;

    for (int i = 0; i < numStatements; i++) {
        string statement;
        cin >> statement;

        if (statement == "X++" || statement == "++X") {
            x++;
        }
        else {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}