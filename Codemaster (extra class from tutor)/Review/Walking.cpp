#include <bits/stdc++.h>
using namespace std ;

vector<vector<char>>grid ;
vector<string>path ;

int n , m ;

void dfs(int x , int y , string p) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> m ;
    grid.resize(n,vector<char>(m)) ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> grid[i][j] ;
        }
    }

    dfs(0 , 0 , "") ;

    for (auto p : path){
        cout << p << "\n" ;
    }
    return 0 ;
}

void dfs(int x , int y , string p){
    if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] == '#'){
        return ;
    }
    else if (x == n-1 && y == m-1){
        path.push_back(p) ;
        return ;
    }

    grid[x][y] = '#' ;

    p.push_back('D') ;
    dfs( x+1 , y , p) ;
    p.pop_back() ;

    p.push_back('R') ;
    dfs( x , y+1 , p) ;
    p.pop_back() ;

    grid[x][y] = '.' ;
}