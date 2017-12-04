#include <iostream>
using namespace std;
bool foundWub(string &song, int i);

int main() {
    string song;
    cin >> song;
    string result;

    for (int i = 0; i < song.length(); i++) {
        bool hasFoundWub = foundWub(song,i);
        if (hasFoundWub && result.length() == 0) {
            i += 2;
            continue;
        } else if (hasFoundWub) {
            i += 2;
            continue;
        } else {
            result += song[i];
        }
        if (foundWub(song, i+1))
            result += " ";
    }
    cout << result << endl;

    return 0;
}

bool foundWub(string &song, int i) {
    bool foundWub = false;
    if ((song.length() -2) <= i)
        return foundWub;
    if (song[i] == 'W')
        if(song[i+1] == 'U')
            if (song[i+2] == 'B')
                foundWub = true;
    return foundWub;
}