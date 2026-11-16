#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    vector<vector<int>>v(n+1,vector<int>(m+1)) ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> v[i][j] ;
        }
    }
    int p = 0 , nn = 0 , e = 0 , o = 0 ;
    int q ;
    cin >> q ;
    while(q--){
        int x , y ;
        cin >> x >> y ;
        if (x < 1 || x > n || y < 1 || y > m){
            continue ;
        }
        else {
            if (v[x][y] > 0){
                p++ ;
            }
            else if (v[x][y] < 0){
                nn++ ;
            }

            if (v[x][y] % 2 == 0){
                e++ ;
            }
            else {
                o++ ;
            }
        }
    }
    cout << p << " " << nn << " " << e << " " << o << "\n" ;
    return 0 ; 
}