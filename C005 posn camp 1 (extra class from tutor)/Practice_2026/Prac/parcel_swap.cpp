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
    for (int i = 0 ; i < n ; i += 2){
        swap(v[i],v[i+1]) ;
    }
    for (auto d : v){
        cout << d << " " ;
    }
    return 0 ;
}