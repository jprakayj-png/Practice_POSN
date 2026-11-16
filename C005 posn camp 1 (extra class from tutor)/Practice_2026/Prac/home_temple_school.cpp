#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , s ;
    cin >> n >> s ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    long long mx = INT_MIN , mn = INT_MAX ;
    for (auto d : v){
        long long k = (d * d) + ((s - d) * (s - d)) ;
        if (k < mn){
            mn = k ;
        }
        if (k > mx){
            mx = k ;
        }
    }
    cout << mx - mn << "\n" ;
    return 0 ;
}