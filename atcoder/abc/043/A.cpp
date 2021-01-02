#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    unsigned short N;
    cin >> N;
    
    int total_candies = (N*(N+1)) / 2;

    cout << total_candies << "\n";

    return 0;
}