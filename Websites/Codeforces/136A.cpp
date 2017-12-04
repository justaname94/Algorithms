#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	int friendsN;
	cin >> friendsN;
	vector<int> friends;
	int result[friendsN];

	int n;
	for (int i = 0; i < friendsN; i++) {
		cin >> n;
		friends.push_back(n);
        int giftedTo = friends[i];
		result[giftedTo-1] = i+1;
	}

	for (int i = 0; i < friendsN; i++) {
		cout << result[i] << " ";
	}

	return 0;
}