#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n+1) ;
    for (int i = 1 ; i<= n ; i++){
        int x ;
        cin >> x ;
        v[i] = v[i-1] + x ;
    }
    cout << v[n] << " " ;
    int mn = INT_MAX ;
    for (int i = 1 ; i <= n ; i++){
        mn = min(mn , v[i]) ;
    }
    cout << mn << "\n" ;
    return 0 ;
}