#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <map>
#include <set>

using namespace std;
// I have never forced a code to work so much like this one
// I am proud of this even though I'm sure you're not
int main()
{   
    int n;
    cin >> n;
    multiset<int> firstWave;
    multiset<int> secondWave;    
    multiset<int> thirdWave;
    
    int value;
    for (int i = 0; i < n; i++) {
        cin >> value;
        firstWave.insert(value);
    }
    for (int i = 1; i < n; i++) {
        cin >> value;
        secondWave.insert(value);
    }
    for (int i = 2; i < n; i++) {
        cin >> value;
        thirdWave.insert(value);
    }
    

    multiset<int> secondWaveCopy(secondWave.begin(), secondWave.end());
    multiset<int> firstWave2(firstWave.begin(), firstWave.end());
    for (auto value : firstWave) {
        auto e = secondWave.find(value);
        if (e != secondWave.end()) {
            auto e2 = firstWave2.find(value);
            firstWave2.erase(e2);
            secondWave.erase(e);
        }
    }
    
    multiset<int> secondWave2(secondWaveCopy.begin(), secondWaveCopy.end());
    for (auto value : secondWaveCopy) {
        auto e = thirdWave.find(value);
        if (e != thirdWave.end()) {
            auto e2 = secondWave2.find(value);
            secondWave2.erase(e2);
            thirdWave.erase(e);
        }
    }
    
    cout << *firstWave2.begin() << endl;
    cout << *secondWave2.begin() << endl;
    
    return 0;
}