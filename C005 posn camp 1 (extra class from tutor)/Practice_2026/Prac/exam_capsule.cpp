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
    float s = 0 ;
    for (int i = 1 ; i < n - 1 ; i++){
        s += v[i] ;
    }
    cout << floor(s / (v.size() - 2)) << "\n" ;
    return 0 ;
}