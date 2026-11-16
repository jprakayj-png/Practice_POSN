#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int r = 1 ; r <= 2 * n - 1 ; r++){
        for (int c = 1 ; c <= 2 * n - 1 ; c++){
            cout << n - min(r-1 , min(c-1 , min(2 * n -1 - r , 2 * n - 1 -c))) << " " ;
        }
        cout << "\n" ;
    }
    return 0 ;
}