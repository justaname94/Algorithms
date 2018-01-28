#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> names;
    map<string,int> users;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        int quantity = users[name]++;

        if (quantity > 0) {
            string quaStr = to_string(quantity);
            name += quaStr;
            names.push_back(name);
        }  else {
            names.push_back("OK");
        }

    }

    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
