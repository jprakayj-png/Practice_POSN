#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int n , m ;
    cin >> n >> m ;
    vector<vector<char>>v(n,vector<char>(m)) ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> v[i][j] ;
        }
    }
    string s ;
    cin >> s ;
    int ct = 0 ;

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            bool ch = true ;
            for (int k = 0 ; k < s.length() ; k++){
                if (j + k >= m){
                    ch = false ;
                    break ;
                }
                if (v[i][j+k] != '.' && v[i][j+k] != s[k]){
                    ch = false ;
                    break ;
                }
            }
            if (ch){
                if ((j > 0 && v[i][j-1] != '#') || (j + s.length() < m && v[i][j+s.length()] == '.')){
                  ch = false ;
                }
            }
            if (ch){
              ct++ ;
            }
        }
    }

    for (int j = 0 ; j < m ; j++){
        for (int i = 0 ; i < n ; i++){
            bool ch = true ;
            for (int k = 0 ; k < s.length() ; k++){
                if (i + k >= n){
                    ch = false ;
                    break ;
                }
                if (v[i+k][j] != '.' && v[i+k][j] != s[k]){
                    ch = false ;
                    break ;
                }
            }
            if (ch){
              if ((i > 0 && v[i-1][j] != '#') || (i + s.length() < n && v[i+s.length()][j] == '.')){
                  ch = false ;
                }
            }
            if (ch){
                ct++ ;
            }
        }
    }

    cout << ct << "\n" ;
    return 0 ;
}