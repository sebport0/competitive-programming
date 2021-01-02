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
    
    string uniques = "";
    for(auto ch : w)
        if((int)uniques.find(ch) == -1)
            uniques += ch;
    
    int uniques_size = (int)uniques.size();
    for(int i = 0; i < uniques_size; i++) {
        int count = std::count(w.begin(), w.end(), uniques[i]);
        if(count%2 != 0) {
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
        
    return 0;
}