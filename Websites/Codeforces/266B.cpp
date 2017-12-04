#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int x, int y);
int main() {
    int queueN, seconds;
    cin >> queueN >> seconds;
    string queue;
    cin >> queue;

    for (int i = 0; i < seconds; i++) {
        for (int j = 0; j < queueN; j++) {
            char currentLineGender = queue[j];
            char nextLineGender = queue[j+1];

            if ((currentLineGender == 'B') && (nextLineGender == 'G')) {
                swap(queue[j + 1], queue[j]);
                j++;
            }
        }
    }

    cout << queue << endl;

    return 0;
}

void swap(int & x, int & y)
{
    int temp = x;
    x = y;
    y = temp;
}