#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    double ans = 69.000000 ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    for (int i = n-1 ; i >= 0 ; i--){
        ans = v[i] + v[i] / ans ;
    }
    cout << fixed << setprecision(6) << ans << "\n" ;
    return 0 ;
}