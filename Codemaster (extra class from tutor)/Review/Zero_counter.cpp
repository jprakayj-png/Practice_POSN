#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    long long zero = 0 ;
    long long d = 5 ;
    while(n / d > 0){
        zero += n / d ;
        d *= 5 ;
    }
    cout << zero << "\n" ;
    return 0 ;
}