#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        int x ;
        cin >> x ;
        mp[x]++ ;
    }
    bool ch = 1 ;
    for (auto x : mp){
        if (x.second != 1){
            ch = 0 ;
            break ;
        }
    }
    if (ch){
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }
    return 0 ;
}