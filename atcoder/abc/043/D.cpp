#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    
    int s_size = s.size();

    for(int i = 0; i < s_size-1; i++) {
        if(s[i] == s[i+1]) { 
            cout << i+1 << " " << i+2 << "\n";
            return 0;
        }
        if(i < s_size - 2 && s[i] == s[i+2]) { 
            cout << i+1 << " " << i+3 << "\n";
            return 0;
        }
   }

    cout << "-1 -1" << "\n";
    return 0;
}