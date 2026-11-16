#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> m ;
    while(m--){
        int n ;
        cin >> n ;
        if (n == 1){
            cout << 1 << "\n" ;
        }
        else {
            cout << (4.25 * n * n) - (5.5 * n) + 1 << "\n" ;
        }
    }
    return 0 ;
}