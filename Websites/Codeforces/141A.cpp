#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    string str4 = str1 + str2;

    sort(str4.begin(), str4.end());
    sort(str3.begin(), str3.end());

    string answer = (str3 == str4) ? "YES" : "NO";
    cout << answer << endl;

    return 0;
}