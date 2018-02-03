#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <map>
#include <set>

using namespace std;
int binary_search_simple(int lo, int hi);
bool check(int);

vector<int> shops;
int money;

int main()
{
    int numShops;
    cin >> numShops;
    for (int i = 0; i < numShops; i++)
    {
        int shop;
        cin >> shop;
        shops.push_back(shop);
    }
    int days;
    cin >> days;
    sort(shops.begin(), shops.end());

    for (int i = 0; i < days; i++)
    {
        cin >> money;
        int buy;
        auto value = upper_bound(shops.begin(), shops.end(), money);
        if (value != shops.end() || *value != money) 
            buy = distance(shops.begin(), value);
        else
            buy = -1;
        cout << buy << endl;
    }

    return 0;
}
