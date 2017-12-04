#include <iostream>
#include "string"
using namespace std;

int main()
{
	int numRocks;
	string rocks;
	cin >> numRocks >> rocks;
	
	char lastRock = rocks[0];
	int rocksOut;

	for (int i = 1; i < numRocks; i++) {
		if (lastRock == rocks[i])
			rocksOut++;
		
		lastRock = rocks[i];
	}

	cout << rocksOut << endl;
    return 0;
}