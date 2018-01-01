#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
//    vector<int> oneArr(n, 1);
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        matrix[0][i] = 1;
    }



    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            if (j == 0)
                matrix[i][j] = 1;
            else {
                int element = matrix[i-1][j] + matrix[i][j-1];
                matrix[i][j] = element;
            }
        }
    }

    cout << matrix[n-1][n-1] << endl;

    return 0;
}