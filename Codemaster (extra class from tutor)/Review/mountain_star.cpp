#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        for (int m = 1 ; m <= n ; m++){
            for (int j = 0 ; j < 2 * n - 2 ; j++){
                if (j == n - 1 - i || j == n -1 + i){
                    cout << "*" ;
                }
                else {
                    cout << " " ;
                }
            }
        }
        if (i == n-1){
            cout << "*" ;
        }
        cout << "\n" ;
    }
    return 0 ;
}