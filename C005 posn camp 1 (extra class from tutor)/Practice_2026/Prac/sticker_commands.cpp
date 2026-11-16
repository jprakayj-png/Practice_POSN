#include <bits/stdc++.h>
using namespace std ;

int r , c , o ;


int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> r >> c >> o ;
    
    vector<vector<char>>v(r+1,vector<char>(c+1)) ;
    
    for (int i = 1 ; i <= r ; i ++){
        for (int j = 1 ; j <= c ; j++){
            cin >> v[i][j] ;
        }
    }
    while(o--){
        string order ;
        cin >> order ;
        if (order == "ROW"){
            int p ;
            cin >> p ;
            for (int ch = 1 ; ch <= c / 2 ; ch++){
                swap(v[p][ch],v[p][c-ch+1]) ;
            }
        }
        if (order == "COL"){
            int p ;
            cin >> p ;
            for (int ch = 1 ; ch <= r / 2 ; ch++){
                swap(v[ch][p],v[r-ch+1][p]) ;
            }
        }
        if (order == "PAINT"){
            int p1 , p2 ;
            char ch ;
            cin >> p1 >> p2 >> ch ;
            v[p1][p2] = ch ;
        }
    }
    for (int i = 1 ; i <= r ; i ++){
        for (int j = 1 ; j <= c ; j++){
            cout << v[i][j] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}