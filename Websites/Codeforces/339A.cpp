#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string operation;
    cin >> operation;
    string result;
    int arrSize = (operation.length()/2) + 1;
    int digits[arrSize];
    int digitIndex = 0;

    for (int i = 0; i < operation.length(); i++) {
        if (operation[i] != '+')
            digits[digitIndex++] = operation[i] - '0';
    }
    sort(digits, digits+arrSize);

    for (int i = 0; i < arrSize; i++) {
        result += (digits[i] + '0');
        result += "+";
    }

    result = result.substr(0, result.length()-1);

    cout << result << endl;

    return 0;
}