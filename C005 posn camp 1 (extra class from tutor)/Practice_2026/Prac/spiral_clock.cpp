#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>>v ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n,vector<int>(n)) ;
    int vl = 1 ;
    bool ch = 0 ;
    int x = 0 , y = 0 ;
    int nx = 0 , ny = 1 ;
    while(vl <= n * n){
        v[x][y] = vl ;
        vl++ ;
        int xx = x + nx ;
        int yy = y + ny ;
        if (xx < 0 || xx >= n || yy < 0 || yy >= n || v[xx][yy] != 0){
            if (nx == 0 && ny == 1){
                nx = 1 ;
                ny = 0 ;
            }
            else if (nx == 1 && ny == 0){
                nx = 0 ;
                ny = -1 ;
            }
            else if (nx == 0 && ny == -1){
                nx = -1 ;
                ny = 0 ;
            }
            else if (nx == -1 && ny == 0){
                nx = 0 ;
                ny = 1 ;
            }
        }
        x += nx ;
        y += ny ;
    }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (n * n >= 100 && v[i][j] < 100){
                if(v[i][j] < 10){
                    cout << 0 << 0 << v[i][j] << " " ;
                }
                else {
                    cout << 0 << v[i][j] << " " ;
                }
            }
            else if (n * n >= 10 && n *n < 100 && v[i][j] < 10){
                cout << 0 << v[i][j] << " " ;
            }
            else {
                cout << v[i][j] << " " ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}