#include <bits/stdc++.h>
using namespace std ;

int n , m ;
int y , x ;
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> m ;
    int arr[n+1][m+1] = {0} ;
    cin >> y >> x ;
    arr[y][x]++ ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.length() ; i++){
        if (s[i] == 'U'){
            y-- ;
        }
        if (s[i] == 'D'){
            y++ ;
        }
        if (s[i] == 'R'){
            x++ ;
        }
        if (s[i] == 'L'){
            x-- ;
        }
        // check
        if (x < 1){
            x = 1 ;
        }
        if (x > m){
            x = m ;
        }
        if (y < 1){
            y = 1 ;
        }
        if (y > n){
            y = n ;
        }
        arr[y][x]++ ;
    }
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cout << arr[i][j] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}