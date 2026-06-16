#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    int n , ans = 0 ;
    cin >> n ;
    for (int i = 5 ; n / i > 0 ; i *= 5){
        ans += n / i ;
    }
    cout << ans << "\n" ;
    return 0 ;
}