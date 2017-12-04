#include <iostream>
using namespace std;

long long theatre() {
    long long m, n, a, height, width, result;
    cin >> m >> n >> a;
    height = width = result = 0;

    if (!(m % a))
    {
        height = m / a;
    } else {
        height = (m / a) + 1;
    }


    if (!(n % a))
    {
        width = n / a;
    } else {
        width = (n / a) + 1;
    }

    result = height * width;
    return result;
}

int main() {
    cout << theatre() << endl;
}
