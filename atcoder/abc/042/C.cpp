#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int N, K;
    cin >> N >> K;
    
    vector<char> dislikes(K);
    for(auto i = 0; i < K; i++)
        cin >> dislikes[i];
    
    for(auto i = N; i < 100*N; i++) {
        string money_to_give = to_string(i);
        bool only_likes_digits = true;
        int money_to_give_total_digits = money_to_give.size();

        for(auto j = 0; j < money_to_give_total_digits; j++) {
            for(auto l = 0; l < K; l++) {
                if(money_to_give[j] == dislikes[l])
                    only_likes_digits = false;
            }
        }
        
        if(only_likes_digits){
            cout << i << endl;
            return 0;
        }
        
    }
    return 0;
}