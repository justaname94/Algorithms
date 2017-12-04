#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long result = 0;
  
    if (n % 2 == 0)
      result = n / 2;
    else
      result = -ceil(n/2.0);
    
    cout << result << endl;

    return 0;
}