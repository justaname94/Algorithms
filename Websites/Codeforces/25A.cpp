#include <iostream>
#include <vector>

using namespace std;

int main() {
    int quantity;
    cin >> quantity;
    vector<int> numbers;

    for (int i = 0; i < quantity; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int index = 1;
    for (int i = 0; i < quantity - 2; i++) {
        int number = numbers[i] % 2;
        int nextNumber = numbers[i+1] % 2;
        int secondNextNumber = numbers[i+2] % 2;

        if ((number == nextNumber) && number != secondNextNumber)
            index = i+3;
        else if ((number != nextNumber) && number == secondNextNumber)
            index = i+2;
        else if ((number != nextNumber) && number != secondNextNumber)
            index = i+1;
    }

    cout << index << endl;
    return 0;
}