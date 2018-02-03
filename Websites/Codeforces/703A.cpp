#include <iostream>
using namespace std;

int main()
{   
    int rounds;
    cin >> rounds;
    int mishka = 0;
    int chris = 0;
    int draw = 0;

    for (int i = 0; i < rounds; i++) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            mishka++;
        else if (a < b)
            chris++;
        else
            draw++;
    }

    if (mishka > chris) 
        cout << "Mishka" << endl;
    else if (mishka < chris)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}