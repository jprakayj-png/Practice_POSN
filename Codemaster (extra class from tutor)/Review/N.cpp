#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>>v ;
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n+1,vector<int>(n+1,-1)) ;
    int p = 1 ;
    for (int i = n ; i >= 1 ; i--){
        v[i][1] = p ;
        p++ ;
        if (p > 9){
            p = 0 ;
        }
    }
    for (int i = 2 ; i <= n ; i++){
        v[i][i] = p ;
        p++ ;
        if (p > 9){
            p = 0 ;
        }
    }
    for (int i = n-1 ; i >= 1 ; i--){
        v[i][n] = p ;
        p++ ;
        if (p > 9){
            p = 0 ;
        }
    }
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            if (v[i][j] != -1){
                cout << v[i][j] << " " ;
            }
            else {
                cout << "  " ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}