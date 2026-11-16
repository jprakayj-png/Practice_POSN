#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n-i ; j++){
            cout << "." ;
        }
        for (int j = i ; j >= 2 ; j--){
            cout << j << "." ;
        }
        cout << 1 ;
        for (int j = 2 ; j <= i ; j++){
            cout << "." << j ;
        }
        cout << "\n" ;
    }
    return 0 ;
}