#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main() {
    unsigned short A, B, C;
    cin >> A >> B >> C;

    vector<unsigned short> ideal = {5, 5, 7};
    vector<unsigned short> syllables = {A, B, C};
    sort(syllables.begin(), syllables.end());

    if (syllables == ideal)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}