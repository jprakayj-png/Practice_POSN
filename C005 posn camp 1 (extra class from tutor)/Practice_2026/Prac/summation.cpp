#include <bits/stdc++.h>
using namespace std ;

int n ;

long long sum(int x) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    cout << sum(n) << "\n" ;
    return 0 ;    
}

long long sum(int x){
    if (x == 0){
        return 0 ;
    }
    return x + sum(x-1) ;
}