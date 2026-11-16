#include <bits/stdc++.h>
using namespace std ;

int n ;
vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    v.resize(n+1) ;
    int l = 0 , r = 0 ;
    for (int i = 1 ; i <= n ; i++){
        cin >> v[i] ;
        if (i % 2 != 0){
            l += v[i] ;
        }
        else {
            r += v[i] ;
        }
    }
    if (l == r){
        cout << "TIE " << l ;
    }
    else if (l > r){
        cout << "LEFT " << l ;
    }
    else {
        cout << "RIGHT " << r ;
    }
    return 0 ;
}