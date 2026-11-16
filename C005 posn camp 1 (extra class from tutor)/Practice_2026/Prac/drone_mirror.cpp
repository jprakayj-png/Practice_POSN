#include <bits/stdc++.h>
using namespace std ;

int n ;

vector<int>v ;

int main() {
    int  l , r ;
    cin >> n >> l >> r ;
    v.resize(n+1) ;
    for (int i = 1 ; i <= n ; i++){
        cin >> v[i] ;
    }
    while(l < r){
        swap(v[l],v[r]) ;
        l++ ;
        r-- ;
    }
    for (int i = 1 ; i <= n ; i++){
        cout << v[i] << " " ; 
    }
    return 0 ;
}