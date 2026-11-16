#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>pos ;

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
            if (pos.empty()){
                pos.push_back({x,y}) ;
            }
            else {
                int lx = pos.back().first ;
                int ly = pos.back().second ;
                if (lx < 1 || lx > n || ly < 1 || ly > m){
                    pos.push_back({x,y}) ;
                    continue ;
                }
                else {
                    if (v[lx][ly] > 0){
                        p++ ;
                    }
                    else if (v[lx][ly] < 0){
                        nn++ ;
                    }

                    if (v[lx][ly] % 2 == 0){
                        e++ ;
                    }
                    else {
                        o++ ;
                    }
                    cout << "--> " << lx << " " << ly << "\n" ;
                }
                pos.push_back({x,y}) ;
            }
        }
        else {
            cout << "--> "<< x << " " << y << "\n" ;
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
            pos.push_back({x,y}) ;
        }
    }
    cout << p << " " << nn << " " << e << " " << o << "\n" ;
    return 0 ;
}