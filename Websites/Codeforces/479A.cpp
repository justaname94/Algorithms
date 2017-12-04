#include <iostream>
using namespace std;

int mathExpression(int a, int b, int c, int n);

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int highest = 0;

    for (int i = 0; i < 5; i++) {
        int expression = mathExpression(a,b,c,i);
        highest = (highest < expression)
                  ? expression : highest;
    }

    cout << highest << endl;

    return 0;
}

int mathExpression(int a, int b, int c, int n) {
    int result = 0;
    switch(n){
        case 0:
            result = a+b*c;
            break;
        case 1:
            result = a*(b+c);
            break;
        case 2:
            result = a*b*c;
            break;
        case 3:
            result = (a+b)*c;
            break;
        case 4:
            result = a+b+c;
            break;
        default:
            break;
    }
