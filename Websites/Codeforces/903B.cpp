#include <iostream>
#include <vector>

using namespace std;

int main() {
    int vovaHealth, vovaPower, potionHealth;
    int modCrabHealth, modCrabPower;
    vector<string> procedure;
    cin >> vovaHealth >> vovaPower >> potionHealth >> modCrabHealth >> modCrabPower;

    int counter = 0;
    while (modCrabHealth >= 1) {
        counter++;
        if (vovaPower >= modCrabHealth) {
            modCrabHealth -= vovaPower;
            procedure.emplace_back("STRIKE");
        }
        else if (modCrabPower >= vovaHealth) {
            vovaHealth += potionHealth;
            procedure.emplace_back("HEAL");
        } else {
            modCrabHealth -= vovaPower;
            procedure.emplace_back("STRIKE");
        }

        vovaHealth -= modCrabPower;

    }

    cout << counter << endl;
    for (int i = 0; i < procedure.size(); i++) {
        cout << procedure[i] << endl;
    }

    return 0;

}