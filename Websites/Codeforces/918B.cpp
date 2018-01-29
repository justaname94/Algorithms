#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> ips;
  
    string command;
    string ip;
    for (size_t i = 0; i < n; i++) {
        cin >> command >> ip;
        ip += ';';
        ips[ip] = command;
    }

    for (size_t i = 0; i < m; i++)
    {
        cin >> command >> ip;
        cout << command << " " << ip << " #" << ips[ip] << endl;
    }

    return 0;
}
