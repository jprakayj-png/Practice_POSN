#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int arr[501][501] ;
    bool ch[501][501] ;

    int n , p = 1 ;
    cin >> n ;
    for (int i = n ; i >= 1 ; i--){
        ch[i][1] = 1 ;
        arr[i][1] = p % 10 ;
        p++ ;
    }
    for (int i = 2 ; i <= n ; i++){
        ch[i][i] = 1 ;
        arr[i][i] = p % 10 ;
        p++ ;
    }
    for (int i = n - 1 ; i >= 1 ; i--){
        ch[i][n] = 1 ;
        arr[i][n] = p % 10 ;
        p++ ;
    }
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            if(ch[i][j]){
                cout << arr[i][j] << " " ;
            }
            else {
                cout << "  " ;
            }
        }
        cout << "\n" ;
    }
    return 0 ;
}