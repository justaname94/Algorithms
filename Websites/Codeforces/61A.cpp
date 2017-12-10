#include <iostream>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    string result = "";

    for (int i = 0; i < x.length(); i++) {
        if (x[i] == y[i]) {
            result += "0";
        } else {
            result +=  "1";
        }
    }

    cout << result << endl;
}