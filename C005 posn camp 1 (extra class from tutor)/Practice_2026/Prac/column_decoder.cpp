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
    for (int i = 0 ; i < m ; i++){
        vector<char>k ;
        char c ;
        cin >> c ;
        for (int j = 0 ; j < n ; j++){
            if (v[j][i] == '.'){
                continue ;
            }
            else {
                k.push_back(v[j][i]) ;
            }
        }
        if (k.empty()){
            cout << '?' ;
        }
        else {
            if (c == 'T'){
                cout << k.front() ;
            }
            else if (c == 'B'){
                cout << k.back() ;
            }
        }
    }
    return 0 ;
}