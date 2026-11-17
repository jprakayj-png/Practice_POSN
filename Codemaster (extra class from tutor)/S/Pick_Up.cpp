#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    map<int , int>m ;
    int n , c = 0 ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if (m[x] < 3){
            m[x]++ ;
            c++ ;
        }
    }
    cout << c << '\n' ;
    for (auto x : m){
        for (int i = 0 ; i < x.second ; i++){
            cout << x.first << " " ;
        }
    }
    return 0 ;
}