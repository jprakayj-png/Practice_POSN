#include <bits/stdc++.h>
using namespace std ;


int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m , k ;
    // input size of table , number of fish invade
    cin >> n >> m >> k ;
    vector<vector<int>>grid (n,vector<int>(m)) ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> grid[i][j] ;
        }
    }
    // find how grid change after fish invade
    for (int r = 0 ; r < k ; r++){
        int p ;
        cin >> p ; // input serial_num of fish invade
        vector<vector<int>>add = grid ; // add for to apply change
        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < m ; j++){
                if (grid[i][j] == p){
                    if (i+1 >= 0 && i + 1 < n){
                        add[i+1][j] = grid[i][j] ; // change down
                    }
                    if (i-1 >= 0 && i - 1 < n){
                        add[i-1][j] = grid[i][j] ; // change up
                    }
                    if (j-1 >= 0 && j - 1 < m){
                        add[i][j-1] = grid[i][j] ; // change left
                    }
                    if (j+1 >= 0 && j + 1 < m){
                        add[i][j+1] = grid[i][j] ; // change right
                    }
                }
            }
        }
        grid = add ; // rewrite change
    }   
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cout << grid[i][j] << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}