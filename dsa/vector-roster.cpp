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
    roster.push_back("coderretro");
    // ── END CONFLICT ZONE ──

    printRoster(roster);
    return 0;
}