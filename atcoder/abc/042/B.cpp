#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <set>
#include <map>
#include <bitset>
#include <deque>
using namespace std;


int main() {
    unsigned short N, L;
    cin >> N >> L;

    vector<string> strings;
    string s;
    for(auto i = 0; i < N; i++) {
        cin >> s;
        strings.push_back(s);  
    }

    sort(strings.begin(), strings.end());
    string result;
    for (auto s : strings)
        result.append(s);
    
    cout << result << "\n";
    return 0;
}