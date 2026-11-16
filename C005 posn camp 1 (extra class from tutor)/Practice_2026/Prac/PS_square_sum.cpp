#include <bits/stdc++.h>
using namespace std ;

int n ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    cin >> n ;
    
    vector<vector<int>>v(n+1,vector<int>(n+1)) ;
    vector<vector<int>>ps(n+1,vector<int>(n+1)) ;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            cin >> v[i][j] ;
        }
    }

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            ps[i][j] = v[i][j] + ps[i][j-1] + ps[i-1][j] - ps[i-1][j-1] ;
        }
    }

    int x1 , y1 , x2 , y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;
    cout << ps[x2][y2] - ps[x2][y1-1] - ps[x1-1][y2] + ps[x1-1][y1-1] << "\n" ;
    
    return 0 ; 
}