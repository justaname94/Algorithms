#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int main()
{   
    int cases;
    cin >> cases;

    int s;
    int c;
    for (size_t i = 0; i < cases; i++) {
        int g, t;
        cin >> g >> t;
        vector<bool> gp(g);
        int tp[t][2];        

        for (size_t i = 0; i < t; i++) {
            int x;
            cin >> x;

            x--;
            tp[i][0] = ((x-1) > 0) ? x-1: 0;
            tp[i][1] = ((x+1) < g) ? x+1 : g-1;
            gp[x] = 1;
        }

        s = 1;
        c = t;
        while (c != g) {
            for (size_t i = 0; i < t; i++) {
                if (tp[i][0] >= 0) 
                    if (!(gp[tp[i][0]])) {
                        gp[tp[i][0]] = 1;
                        tp[i][0]--;
                        c++;
                    }
                
                if (tp[i][1] < g) 
                    if (!(gp[tp[i][1]])) {
                        gp[tp[i][1]] = 1;
                        tp[i][1]++;
                        c++;
                    }
            }
            s++;
        }
        cout << s << endl;
    } 

    return 0;
}
