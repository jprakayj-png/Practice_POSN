#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    char path[2][n] ;
    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> path[i][j] ;
        }
    }
    for (int i = 0 ; i < n ; i++){
        if (path[0][i] == '#' && path[1][i] == '#'){
            cout << "No" << "\n" ;
            return 0 ;
        }
    }
    cout << "Yes \n" ;
    return 0 ;
}