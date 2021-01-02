#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <set>
#include <map>
#include <bitset>
#include <deque>
using namespace std;

int getCost(int x, int y) {
    unsigned short cost = (x - y) * (x - y);
    return (int)cost;
}

int main() {
    int N;
    cin >> N;

    vector<int> A;
    int a;
    for(auto i = 0; i < N; i++) {
        cin >> a;
        A.push_back(a);
    }

    // Check if all elements of A are the same.
    int eq_count = 0;
    for(auto i = 1; i < A.size(); i++) 
        eq_count = A[i-1] == A[i] ? ++eq_count : eq_count;
    if(eq_count == A.size() - 1) {
        cout << 0 << "\n";
        return 0;
    }

    // Compare costs between candidates targets and return the one that minimizes the cost.
    int minA = *min_element(A.begin(), A.end());
    int maxA = *max_element(A.begin(), A.end());
    int target;
    int transformation_cost = 0;
    int cost = 0;
    for(auto a : A)
        cost += getCost(a, minA);

    for(auto candidate_target = minA+1; candidate_target <= maxA; candidate_target++) {
        for(auto a : A)
            transformation_cost += getCost(a, candidate_target);
        if(transformation_cost < cost) {
            cost = transformation_cost;
            target = candidate_target;
            transformation_cost = 0;
        }
    }
    cout << cost << "\n";

    return 0;
}