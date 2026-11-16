#include <bits/stdc++.h>
using namespace std ;

long long fac(int x) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    cout << fac(n) << "\n" ;
    return 0 ;
}

long long fac(int x){
    if (x <= 1){
        return 1 ;
    }
    return x * fac(x-1) ;
}