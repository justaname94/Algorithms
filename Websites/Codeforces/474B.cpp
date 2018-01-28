#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <map>

using namespace std;
bool check(int index);
int binary_search_simple(int lo, int hi);
map<int,vector<int> > wormsPiles;
int currentWormPos;

int main()
{
    int numPiles, numJuWorms;
    int pileRange = 1;
    cin >> numPiles;
    for(int i = 0; i < numPiles; i++) {
        int pile;
        cin >> pile;
        wormsPiles[i].push_back(pileRange);
        wormsPiles[i].push_back(pile+pileRange-1);
        pileRange += pile;        
    }
    cin >> numJuWorms;
    for (int i = 0; i < numJuWorms; i++) {
        int worm;
        cin >> worm;
        currentWormPos = worm;
        int result = binary_search_simple(0, wormsPiles.size()-1);
        cout << result+1 << endl;
    }

    return 0;
}

int binary_search_simple(int lo, int hi) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(mid);
      if (chk) {
         hi = mid - 1;
         res = mid;     // if searching for last NO, move this line to else case  
      } else {
         lo = mid + 1;
      }
   }
   return res;
}

bool check(int index) {
  if (wormsPiles[index][0] >= currentWormPos ||
      wormsPiles[index][1] >= currentWormPos)
    return true;
  else
    return false;
  return 0;
}
