#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    for (int p = 0 ; p < n ; p++){
        int l = 0 , r = 0 ;
        for (int j = 0 ; j < p ; j++){
            l += v[j] ;
        }
        for (int j = p + 1 ; j < n ; j++){
            r += v[j] ;
        }
        if (l == r){
            cout << "BALANCE " << p + 1 << "\n" ;
            return 0 ;
        }
    }
    cout << "NO BALANCE\n" ;
    return 0 ;     
}