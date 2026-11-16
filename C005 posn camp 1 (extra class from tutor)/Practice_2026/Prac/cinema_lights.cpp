#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m , q ;
    cin >> n >> m >> q ;
    v.resize(n+1,vector<int>(m+1)) ;
    for (int i = 1 ; i <= n ; i++){
        string s ;
        cin >> s ;
        for (int j = 1 ; j<= m ; j++){
            v[i][j] = s[j-1] - '0' ;
        }
    }
    while(q--){
        int x1 , y1 , x2 , y2 ;
        cin >> x1 >> y1 >> x2 >> y2 ;
        for (int i = x1 ; i <= x2 ; i++){
            for (int j = y1 ; j <= y2 ; j++){
                v[i][j] ^= 1 ;
            }   
        }
        int ct = 0 ;
        for (int i = 1 ; i <= n ; i++){
            for (int j = 1 ; j <= m ; j++){
                if (v[i][j] == 1){
                    ct++ ;
                }
            }
        }
        cout << ct << " " ;
    }
    cout << "\n" ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cout << v[i][j] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}    