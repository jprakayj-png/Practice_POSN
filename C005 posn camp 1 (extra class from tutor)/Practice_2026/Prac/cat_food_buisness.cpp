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
    sort(v.begin(),v.end()) ;
    int mx = 0 , k = 0 ;
    for (int i = 0 ; i < v.size() ; i++){
        int x = v[i] * (v.size() - i ) ;
        if (x > mx){
            mx = x ;
            k = v[i] ;
        }
    }
    cout << k << " " << mx << "\n" ;
    return 0 ;
}