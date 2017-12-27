#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m,n;
    cin >> m >> n;

    vector<string> snake;

    int direction = 1;
    for (int i = 0; i < m; i++) {
        string line;
        for (int j = 0; j < n; j++) {
            if ((i+1) % 2 != 0)
                line += "#";
            else {
                if (direction % 2 != 0) {
                    if (j == n-1)
                        line += "#";
                    else
                        line += ".";
                } else {
                    if (j == 0)
                        line += "#";
                    else
                        line += ".";
                }

            }
        }
        snake.push_back(line);
        if (i % 2 != 0)
            direction++;
    }

    for (int i = 0; i < snake.size(); i++) {
        cout << snake[i] << endl;
    }

    return 0;
}