#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>>v ;
vector<vector<int>>ch ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , q ;
    cin >> n >> q ;
    v.resize(n,vector<int>(n)) ;
    int p = 0 ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            v[i][j] = p % 10 ;
            p++ ;
        }
    }
    
    while(q--){
        ch = v ;
        int dir , p ;
        cin >> dir >> p ;
        int l = p , r = n - p - 1 ;
        // top 
        for (int j = l ; j < r ; j++){
            if (dir == 1){ // clockwise
                ch[l][j+1] = v[l][j] ;
            }
            else { // counter-clockwise
                ch[l][j] = v[l][j+1] ;
            }
        }
        // right 
        for (int i = l ; i < r ; i++){
            if (dir == 1){
                ch[i+1][r] = v[i][r] ;
            }
            else {
                ch[i][r] = v[i+1][r] ;
            }
        }
        // bottom
        for (int j = r ; j > l ; j--){
            if (dir == 1){
                ch[r][j-1] = v[r][j] ;
            }
            else {
                ch[r][j] = v[r][j-1] ;
            }
        }
        // left 
        for (int i = r ; i > l ; i--){
            if (dir == 1){
                ch[i-1][l] = v[i][l] ; 
            }
            else {
                ch[i][l] = v[i-1][l] ;
            }
        }
        v = ch ;    
    }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << v[i][j] << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}