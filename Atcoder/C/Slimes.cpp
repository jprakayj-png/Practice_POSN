#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    char p ;
    int c = 0 ;
    for (int i = 0 ; i < n ; i++){
        char x ;
        cin >> x ;
        if (p != x){
            c++ ;
            p = x ;
        }
    }
    cout << c << "\n" ;
    return 0 ;
}