#include <bits/stdc++.h>
using namespace std ;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int n ;
    cin >> n ;

    vector<vector<ll>>dp(n+1,vector<ll>(3,0)) ;
    dp[0][0] = 1 ;

    for (int i = 0 ; i < n ; i++){
        // state 0
        dp[i+1][0] += dp[i][0] ;
        dp[i+1][1] += dp[i][0] ;
        
        // state1
        dp[i+1][0] += dp[i][1] ;
        dp[i+1][2] += dp[i][1] ;

        // state2 
        dp[i+1][2] += dp[i][2] ;
    }

    long long val = dp[n][0] + dp[n][1] + dp[n][2] ;
    cout << val << "\n" ;
    return 0 ;
}