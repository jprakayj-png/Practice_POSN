#include <bits/stdc++.h>
using namespace std ;

vector<bool>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long m , n ;
    cin >> m >> n ;
    v.resize(n+1,0) ;
    for (size_t i = 0 ; i < m ; i++){
        long long x ;
        cin >> x ;
        if (x > n || x < 1){
            continue ;
        }
        else {
            v[x] = 1 ;
        }
    }
    long long sum = 0 ;
    for (size_t i = 1 ; i <= n ; i++){
        if (!v[i]){
            sum += i ;
        }
    }
    cout << sum << "\n" ;
    return 0 ;
}