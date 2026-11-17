#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    vector<vector<int>>v(20,vector<int>(9,0)) ;
    int td , c , d ;
    cin >> td >> c >> d ;
    int p = 1 , r = 1 , x = 0 , y = 0 ;
    while(p <= td){
        v[r][c] = p ;
        if (p == d){
            x = r ;
            y = c ;
        }
        p++ ;
        c++ ;
        if (c > 7){
            c = 1 ;
            r++ ;
        }
    }
    cout << v[x-1][y] + v[x][y+1] + v[x+1][y] + v[x][y-1] << "\n" ;
    return 0 ;
}