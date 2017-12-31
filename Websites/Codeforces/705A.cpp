#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int layers;
    cin >> layers;

    string line;

    for (int i = 1; i < layers; i++) {
        if (i % 2 == 0)
            line += "I love that ";
        else
            line += "I hate that ";
    }

    if (layers % 2 == 0)
        line += "I love ";
    else
        line += "I hate ";

    line += "it";

    cout << line << endl;
}