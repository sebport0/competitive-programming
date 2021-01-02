#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;

    string output = "";
    for(auto key : s) {
        if(key == '0')
            output = output + "0";
        if(key == '1')
            output = output + "1";
        if(key == 'B') {
            if(output != "")
                output.pop_back();
        }
    }
    cout << output << "\n";

    return 0;
}