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
    for (int i = 0 ; i < n / 2 ; i++){
        if (v[i] != v[n-1-i]){
            cout << "BROKEN" ;
            return 0 ;
        }
    }
    cout << "MIRROR" ;
    return 0 ;
}