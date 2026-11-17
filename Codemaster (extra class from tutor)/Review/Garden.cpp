#include <bits/stdc++.h>
using namespace std ;

vector<vector<long long>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , m , l ;
    cin >> n >> m >> l ;
    v.resize(n+1,vector<long long>(m+1)) ;
    string s ;
    cin >> s ;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> v[i][j] ;
        }
    }
    long long ans = 0 ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            long long t = v[i][j] ;
            int y = i , x = j ;
            for (int c = 0 ; c < l ; c++){
                if (s[c] == 'U'){
                    if (y-1 < 1){
                        break ;
                    }
                    y = y - 1 ;
                }
                else if (s[c] == 'R'){
                    if (x+1 > m){
                        break ;
                    }
                    x = x + 1 ;
                }
                else if (s[c] == 'D'){
                    if (y+1 > n){
                        break ;
                    }
                    y = y + 1 ;
                }
                else {
                    if (x-1 < 1){
                        break ;
                    }
                    x = x - 1 ;
                }
                t += v[y][x] ;
            }
            ans = max(ans,t) ;
        }
    }
    cout << ans << "\n" ;
    return 0 ;
}