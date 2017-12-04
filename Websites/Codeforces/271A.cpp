#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int year;
    cin >> year;
    year++;

    while (true) {
        int currentYear = year;
        vector<int> digits;
        bool isBeautifulYear = true;

        while (currentYear != 0) {
            int digit = currentYear % 10;
            digits.push_back(digit);
            currentYear /= 10;
        }

        for (int i = 0; i < digits.size() - 1; i++)
        {
            for (int j = i + 1;j < digits.size(); j++)
            {
                // found duplicate
                if (digits[i] == digits[j]) {
                    isBeautifulYear = false;
                    break;
                }
            }
        }

        if (isBeautifulYear)
            break;

        year++;
    }

    cout << year << endl;
    
    return 0;
}