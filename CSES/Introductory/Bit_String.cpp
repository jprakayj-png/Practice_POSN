#include <bits/stdc++.h>
using namespace std ;

int MOD =  1000000007 ;

long long modpow(long long base , long long d , long long mod) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    cout << modpow(2 , n , MOD) << "\n" ;
    return 0 ;
}

long long modpow(long long base , long long d , long long mod){
    long long res = 1 ;
    while(d > 0){
        if (d % 2 == 1){
            res = (res * base) % mod ; 
        }
        base = (base * base) % mod ;
        d /= 2 ;
    }
    return res ;
}