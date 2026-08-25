#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    for (int i = 1 ; i <= m ; i++){
        mp[i] = -1 ;
    }
    for (int i = 1 ; i <= n ; i++){
        int b , s ;
        cin >> b >> s ;
        mp[b] = max(mp[b],s) ;
    }
    for (auto x : mp){
        cout << x.second << " " ;
    }
    return 0 ;
}