#include <bits/stdc++.h>
using namespace std ;

int n , m ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> m ;
    vector<vector<int>>v(n+1,vector<int>(m+1)) ;
    int mx = INT_MIN , p = 0 , k = 0 ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> v[i][j] ;
            k += v[i][j] ;
        }
        if (k > mx){
            mx = k ;
            p = i ;
        }
        k = 0 ;
    }
    cout << p << " " << mx << "\n" ;
    return 0 ; 
}