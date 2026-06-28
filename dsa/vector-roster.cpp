#include <iostream>
#include <vector>
using namespace std;

void printRoster(vector<string>& roster) {
    for (int i = 0; i < roster.size(); i++) {
        cout << i + 1 << ". " << roster[i] << endl;
    }
}

int main() {
    vector<string> roster;

    // ── CONFLICT ZONE: every member adds their line here ──
    roster.push_back("Muhammad Awais");
    roster.push_back("coderretro");
    roster.push_back("Talha Zahoor");
    roster.push_back("SyedaEasha");
    roster.push_back("waleeja07-wk");
     roster.push_back("Arshkhattak");

    // ── END CONFLICT ZONE ──

    printRoster(roster);
    return 0;
}