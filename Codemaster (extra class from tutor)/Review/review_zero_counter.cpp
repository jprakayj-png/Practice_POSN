#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    long long d = 5 ;
    long long sum = 0 ;
    while (n / d > 0){
        sum += n / d ;
        d *= 5 ;
    }
    cout << sum << "\n" ;
    return 0 ; 
}