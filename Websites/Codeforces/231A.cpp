#include <iostream>
using namespace std;

int main() {
    int problems;
    cin >> problems;
    
    int sureSolutions = 0;
    for (int i = 0; i < problems; i++) {
        int sure1, sure2, sure3;
        cin >> sure1 >> sure2 >> sure3;
        int sureTotal = sure1 + sure2 + sure3;
        
        if (sureTotal > 1)
            sureSolutions++;
    }
    
    cout << sureSolutions << endl;
    
    return 0;
}