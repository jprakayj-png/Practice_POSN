#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    char c ;
    cin >> n >> c ;
    bool grid[n][5] ;
    for (int i = 0 ; i < n ; i++){
        string s ;
        cin >> s ;
        for (int j = 0 ; j < 5 ; j++){
            if (s[j] == 'x'){
                grid[i][j] = 0 ;
            }
            else {
                grid[i][j] = 1 ;
            }
        }
    }
    if (grid[n-1][c-'A']){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    return 0 ;
}