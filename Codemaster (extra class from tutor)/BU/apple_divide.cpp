#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    int sum = 0 ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        sum += v[i] ;
    }
    vector<bool>dp(sum+1,0) ;
    dp[0] = 1 ;
    for (auto x : v){
        for (int s = sum ; s >= x ; s--){
            if (dp[s-x]){
                dp[s] = 1 ;
            }
        }
    }
    int best = sum ;
    for (int i = 0 ; i <= sum ; i++){
        if (dp[i]){
            best = min(best , abs(sum - 2 * i)) ;
        }
    }
    cout << best << "\n" ;
    return 0 ;
}