#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int n , m , k ;
    cin >> n >> m >> k ;

    vector<vector<int>> grid(n+1 , vector<int>(m+1,0)) ;
    vector<vector<int>> pf(n+1 , vector<int>(m+1,0)) ;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> grid[i][j] ;
        }
    }

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            pf[i][j] = grid[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1] ;
        }
    }
    while(k--){
        int x1 , y1 , x2 , y2 ;
        cin >> x1 >> y1 >> x2 >> y2 ;
        cout << pf[x2][y2] - pf[x1-1][y2] - pf[x2][y1-1] + pf[x1-1][y1-1] << "\n" ;
    }
    return 0 ;
}