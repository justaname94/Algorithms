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
    int num;
    cin >> num;
    vector<int> programming;
    vector<int> math;
    vector<int> pe;

    for (int i = 1; i <= num; i++) {
        int n;
        cin >> n;
        if (n == 1)
            programming.push_back(i);
        else if (n == 2)
            math.push_back(i);
        else
            pe.push_back(i);
    }

    vector< vector<int> > teams;

    while (programming.size() > 0 && math.size() > 0 && pe.size() > 0) {
        vector<int> team;
        
        team.push_back(programming[0]);
        programming.erase(programming.begin());
        
        team.push_back(math[0]);
        math.erase(math.begin());
        
        team.push_back(pe[0]);
        pe.erase(pe.begin());
        
        teams.push_back(team);
    }    

    if (teams.size() > 0) {
        cout << teams.size() << endl;
        for (int i = 0; i < teams.size(); i++) {
            for (int j = 0; j < 2; j++) {
                cout << teams[i][j] << " ";
            }
            cout << teams[i][2] << endl;
        }
    }
    else
        cout << 0 << endl;

    return 0;
}