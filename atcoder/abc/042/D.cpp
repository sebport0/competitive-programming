#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <set>
#include <map>
#include <bitset>
#include <deque>
using namespace std;


int fact(int n) {
    return (n == 0) || (n == 1) ? 1 : n * fact(n-1); 
}

int main() {
    unsigned int mod = 1e9 + 7;

    unsigned int H, W, A, B;
    cin >> H >> W >> A >> B;

    long long total_paths = (long long)fact(W + H - 2) /(fact(W-1) * fact(H-1));

    // Now we need to do something to count the paths erased by the forbidden cells.
    // ans = total_paths - forbidden_paths
    cout << total_paths << endl;

    return 0;
}