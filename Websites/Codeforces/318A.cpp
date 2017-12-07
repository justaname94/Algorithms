#include <iostream>
using namespace std;

int main()
{
    long long sequence, pos;
    cin >> sequence >> pos;

    long long result = 1;
    if (sequence % 2 == 0) {
        result = pos + pos-1;
        if (pos > (sequence/2))
            result = 2 * (pos - (sequence/2));
    } else {
        result = pos + pos-1;
        if (pos > (sequence/2+1))
            result = 2 * (pos - ((sequence/2)+1));
    }

    cout << result << endl;
    return 0;
}