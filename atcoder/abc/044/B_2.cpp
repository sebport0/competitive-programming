#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <set>
#include <map>
#include <bitset>
#include <deque>
#include <algorithm>
using namespace std;


int main() {
    string w;
    cin >> w;
    
    int w_size = (int)w.size();
    unordered_set<char> counted;
    for(int i = 0; i < w_size; i++) {
        if(counted.count(w[i]) == 1)
            continue;
        counted.insert(w[i]);
        int count = std::count(w.begin(), w.end(), w[i]);
        if(count%2 != 0) {
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
        
    return 0;
}