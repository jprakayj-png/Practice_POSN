#include <bits/stdc++.h>
using namespace std ;

int n , a , b ;

vector<vector<int>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> a >> b ;
    v.resize(n+1,vector<int>(n+1)) ;
    
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            cin >> v[i][j] ;
        }
    }

    if (a < 1 || a > n || b < 1 || b > n){
        cout << 0 << "\n" ;
        return 0 ;
    }

    vector<vector<int>>dp(a+1,vector<int>(b+1 , 0)) ;
    dp[1][1] = v[1][1] ;
    
    for (int j = 2 ; j <= b ; j++){
        dp[1][j] = dp[1][j-1] + v[1][j] ;
    }

    for (int i = 2 ; i <= a ; i++){
        dp[i][1] = dp[i-1][1] + v[i][1] ;
    }

    for (int i = 2 ; i <= a ; i++){
        for (int j = 2 ; j <= b ; j++){
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + v[i][j] ;
        }
    }
    cout << dp[a][b] << "\n" ;
    return 0 ;
} 