#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    int n ;
    cin >> n ;
    int ipf[n+1] ;
    ipf[0] = 0 ;
    for (int i = 1 ; i <= n ; i++){
        cin >> ipf[i] ;
    }
    for (int i = 1 ; i <= n ; i++){
        cout << ipf[i] - ipf[i-1] << " " ;
    }
    return 0 ;
}