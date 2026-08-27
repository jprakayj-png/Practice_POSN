#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    v.resize(3) ;
    for (int i = 0 ; i < 3 ; i++){
        cin >> v[i] ;
    }
    sort(v.begin(),v.end(),greater<int>()) ;
    int k ;
    cin >> k ;
    while(k--){
        v[0] *= 2 ;
    }
    cout << v[0] + v[1] + v[2] << "\n" ;
    return 0 ;
}