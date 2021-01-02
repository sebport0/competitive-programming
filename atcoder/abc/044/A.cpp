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
    int N, K, X, Y;
    cin >> N; 
    cin >> K;  
    cin >> X;  
    cin >> Y;

    int remaining_nights = N - K;
    int total = N <= K ? N * X : K * X + remaining_nights * Y;

    cout << total << "\n";
    return 0;
}