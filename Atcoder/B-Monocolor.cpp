#include <bits/stdc++.h>
using namespace std ;

map<int,int>m ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , mx = 0 ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        int x ;
        cin >> x ;
        m[x]++ ;
    }
    for (auto x : m){
        mx = max(mx,x.second) ;
    }
    cout << n - mx << "\n" ;
    return 0 ;
}