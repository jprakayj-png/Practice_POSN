#include <bits/stdc++.h>
using namespace std ;

vector<string>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int p = 0 ;
    cin >> m ;
    while(m--){
        string s ;
        cin >> s ;
        if (s == "NEXT"){
            p++ ;
        }
        else if (s == "PREV"){
            p-- ;
        }
    }
    cout << v[p % n] ;
    return 0 ;
}