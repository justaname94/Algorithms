#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;
int LowestDistance(int a, int b);

int main()
{
    int digits;
    string oriState, comb;
    cin >> digits >> oriState >> comb;
    int result = 0;

    for (int i = 0; i < digits; i++)
    {
        int num = oriState[i] - '0';
        int goal = comb[i] - '0';
        result += LowestDistance(num, goal);
    }

    cout << result << endl;
    return 0;
}

int LowestDistance(int a, int b)
{   
    int second_a = a;
    int leftCounter = 0;
    while (a != b)
    {
        if (a == 9)
            a = 0;
        else
            a++;
        leftCounter++;
    }

    int rightCounter = 0;
    while (second_a != b)
    {
        if (second_a == 0)
            second_a = 9;
        else
            second_a--;
        rightCounter++;
    }

    return (leftCounter < rightCounter) ? leftCounter : rightCounter;
}
