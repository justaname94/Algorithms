#include <iostream>
#include <vector>

using namespace std;

int main() {
    long position;
    cin >> position;

    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    long times  = 0;
    long counter = 1;

    string individual;
    for (int i = 1;  ; i+=counter) {

        if (times > 4) {
            times = 0;
        }

        if (i >= position) {
            individual = names[times];
            break;
        }

        times++;

        if (times > 4) {
            counter *= 2;
        }
    }

    cout << individual << endl;
    
    return 0;
}