#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int q , n , m ;
    cin >> q >> n >> m ;
    while(q--){
        vector<vector<char>>v ;
        v.resize(n+1,vector<char>(m+1)) ;
        for (int i = 1 ; i <= n ; i++){
            for (int j = 1 ; j <= m ; j++){
                cin >> v[i][j] ;
            }
        }
        int mx = INT_MIN , mn = INT_MAX ;
        for (int i = 1 ; i <= n ; i++){
            for (int j = 1 ; j <= m ; j++){
                if (v[i][j] == '#'){
                    mn = min(mn,n-i+1) ;
                    mx = max(mx,n-i+1) ;
                    break ;
                }
            }
        }
        cout << mx - mn << "\n";
    }
    return 0 ;
}