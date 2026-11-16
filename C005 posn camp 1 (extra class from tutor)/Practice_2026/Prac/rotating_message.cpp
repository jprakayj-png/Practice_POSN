#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    char arr[n][m] ;
    char ans[m][n] ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> arr[i][j] ;
        }
    }
    for (int i = n-1 ; i >= 0 ; i--){
        for (int j = 0; j < m ; j++){
            ans[j][n-i-1] = arr[i][j] ;
        }
    }
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << ans[i][j]  ;
        }
        cout << "\n" ;
    }
    return 0 ;
}