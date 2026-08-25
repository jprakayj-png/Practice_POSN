#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int pf[n+1] ;
    pf[0] = 1 , pf[1] = 1 ;
    for (int i = 2 ; i <= n ; i++){
        pf[i] = 0 ;
        for (int j = i ; j > 0 ; j--){
            pf[i] += pf[j-1] ;
        }
    }
    for (auto x : pf){
        cout << x << " " ;
    }
    return 0 ;
}