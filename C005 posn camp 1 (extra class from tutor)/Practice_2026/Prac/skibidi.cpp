#include <bits/stdc++.h>
using namespace std ;

const long long mod = 1000000007 ;
int d , k ;

long long skibidi(int x) ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> d >> k ;
    cout << skibidi(d-1) << "\n" ;
    return 0 ;
}

long long skibidi(int x){
    if (x == 0){
        return 1 ;
    }
    return (k * skibidi(x-1)) % mod ;
}