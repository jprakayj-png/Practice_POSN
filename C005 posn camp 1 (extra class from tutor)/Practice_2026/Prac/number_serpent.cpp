#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    v.resize(n,vector<int>(m)) ;
    int vl = 1 ;
    int x = 0 , y = 0 ;
    int xx = 0 , yy = 1 ;
    for (int i = 0 ; i < n ; i++){
        if (i % 2 == 0){
            for (int j = 0 ; j < m ; j++){
                v[i][j] = vl++ ;
            }
        }
        else {
            for (int j = m-1 ; j >= 0 ; j--){
                v[i][j] = vl++ ;
            }
        }
    }

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if (n * m >= 100 && v[i][j] < 10){
                cout << 0 << 0 << v[i][j] << " " ;
            }
            else if (n * m >= 100 && v[i][j] < 100){
                cout << 0 << v[i][j] << " " ;
            }
            else if (n *m >= 10 && v[i][j] < 10){
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