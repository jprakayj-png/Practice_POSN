#include <bits/stdc++.h>
using namespace std ;

long long n , i = 5 ;
long long ans = 0 ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    while (n / i > 0){
        ans += n / i ;
        i *= 5 ;
    }
    cout << ans << "\n" ;
    return 0 ;
}