/*
 * File:    pointer-roster.cpp
 * Task:    DSA — Pointers
 * Repo:    github.com/ik-awais/Octagon
 * Date:    2026
 *
 * Description:
 *   A shared team file. Each member adds their name to the roster
 *   pointer array and writes a pointer arithmetic function.
 *   This file is intentionally shared to practice conflict resolution.
 */

#include <iostream>
using namespace std;

// ─── STEP 1 ────────────────────────────────────────────────────────────
// Add a pointer to your name in this array at the next available index.
// Do not remove any existing entry.

const char* roster[] = {
    "ik-awais",      // index 0
    // members: add your entry below this lin

    "coderretro",
    "velanora",
    "Arshkhattak",

};

// ─── STEP 2 ────────────────────────────────────────────────────────────
// Write your count function below using pointer arithmetic only.
// No strlen allowed.

int count_ikawais(const char* name) {
    int len = 0;
    while (*name != '\0') {
        len++;
        name++;
    }
    return len;
}


// ─── YOUR FUNCTION GOES HERE ────────────────────────────────────────────

int count_coderretro(const char* name) {
    if(!name) return 0;
    int len=0;
    while(*name++) len++;

    return len;
}

int count_velanora(const char*name)
{
    int len = 0;
    while (*name != '\0')
    {
        name++;
        len++;
    } 
    return len;
}

int count_Arshkhattak(const char * name)
{
    int len = 0;
    while (*name != '\0') {
        len++;
        name++;
    }
    return len;
}

// ─── STEP 3 ────────────────────────────────────────────────────────────
int main() {

    // Print all roster members via pointer traversal
    int size = sizeof(roster) / sizeof(roster[0]);
    const char** ptr = roster;
    for (int i = 0; i < size; i++) {
        cout << "Member " << (i + 1) << ": " << *ptr << endl;
        ptr++;
    }

    cout << "---" << endl;

    // Function calls — example already here:
    cout << "Length of 'ik-awais': " << count_ikawais(roster[0]) << endl;

    // ADD YOUR FUNCTION CALL BELOW THIS LINE

    cout << "Length of 'coderretro': " << count_coderretro(roster[1]) << endl;

    cout << "Length of 'velanora': " << count_velanora(roster[2]) << endl;

      cout  << "Length of 'Arshkhattak' :" << count_Arshkhattak(roster[3]) << endl;


    return 0;
}

