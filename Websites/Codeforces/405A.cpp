#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int numColumns;
    cin >> numColumns;
    vector<int> columns;

    for (int i = 0; i < numColumns; i++) {
        int column;
        cin >> column;
        columns.push_back(column);
    }

    sort(columns.begin(), columns.end());

    for (int i = 0; i < numColumns; i++) {
        cout << columns[i] << endl;
    }
    return 0;
}