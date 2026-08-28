#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long h , n ;
    cin >> h >> n ;
    while(n--){
        long long x ;
        cin >> x ;
        h -= x ;
    }
    if (h <= 0){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    return 0 ;
}