#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;
vector<int>k ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        k.push_back(v[i]) ;
    }
    k.push_back(k[0]) ;
    k.erase(k.begin()) ;
    int c = 1 ;
    while(k != v){
        k.push_back(k[0]) ;
        k.erase(k.begin()) ;
        c++ ;
    }
    cout << c << "\n" ;
    return 0 ;
}