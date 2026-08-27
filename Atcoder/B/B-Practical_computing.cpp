#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int arr[n][n] ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j <= i ; j++){
            if (i == 0 || j == 0 || i == j){
                arr[i][j] = 1 ;
            }
            else {
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1] ;
            }
        }
    }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j <= i ; j++){
            cout << arr[i][j] << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}