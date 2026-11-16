#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m , k ;
    cin >> n >> m >> k ;

    vector<vector<int>>v(n+1,vector<int>(m+1)) ;
    vector<vector<int>>pf(n+1,vector<int>(m+1)) ;


    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> v[i][j] ;
        }
    }

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            pf[i][j] = v[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1] ;
        }
    }

    while(k--){
        int x1 , y1 , x2 , y2 ;
        cin >> x1 >> y1 >> x2 >> y2 ;
        long long sum = pf[x2][y2] - pf[x1-1][y2] - pf[x2][y1-1] + pf[x1-1][y1-1] ;
        cout << sum << " " ;
        int cnt = 0 ;
        for (int i = x1 ; i <= x2 ; i++){
            for (int j = y1 ; j <= y2 ; j++){
                if (v[i][j] % 2 == 0){
                    cnt++ ;
                }
            }
        }
        cout << cnt << "\n" ;
    }

    return 0 ;
}