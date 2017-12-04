#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int groupsNum;
    cin >> groupsNum;
    vector<int> groups(groupsNum);

    for (int i = 0; i < groups.size(); i++)
    {
        cin >> groups[i];
    }

    // Sort from biggest to smallest Num.
    sort(groups.rbegin(), groups.rend());

    int taxis = 0;
    int taxiLimit = 4;
    int groupsInTaxi = 0;
    // This is used so the loop doesn't check from the very end
    // of the back of the array every time it checks elements from
    // the end.
    int groupsFromEnd = 0;

    int i = 0;
    while (groupsInTaxi < groupsNum) {
        int group = groups[i];
        groupsInTaxi++;

        // A group can be added only if after adding a new member the
        // size is still lower or equal than the taxi limit.
        int nextGroup = (groups.size() - 1)-groupsFromEnd;
        bool canAddGroup =
                (group + groups[nextGroup]) <= taxiLimit;

        if (canAddGroup) {
            for (int j = nextGroup; j >= 0; j--) {
                if ((group + groups[j]) <= 4) {
                    group += groups[j];
                    groupsInTaxi++;
                    groupsFromEnd++;
                }

                if (group >= taxiLimit) {
                    break;
                }
            }
        }
        taxis++;
        i++;
    }

    cout << taxis << endl;

    return 0;
}