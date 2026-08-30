#include <bits/stdc++.h>
using namespace std ;

vector<string>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int mx = 0 ;
    for (int i = 0 ; i < n ; i++){
        int p = v[i].length() ;
        mx = max(mx,p) ;
    }
    for (int i = 0 ; i < n ; i++){
        int p = v[i].length() ;
        int r = mx - p ;
        for (int i =  0 ; i < r / 2 ; i++){
            cout << "." ;
        }
        cout << v[i] ;
        for (int i =  0 ; i < r / 2 ; i++){
            cout << "." ;
        }
        cout << "\n" ;
    }
    return 0 ;
}