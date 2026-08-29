#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , t ;
    cin >> n >> t ;
    bool c[t] ;
    int m = n ;
    while(m--){
        int x ;
        cin >> x ;
        c[x-1] = 1 ;
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
        cout << "Yes\n" ;
    }
    else {
        cout << "No\n" ;
    }
    for (int i = 1 ; i <= t ; i++){
        if (!c[i-1]){
            cout << "No\n" ;
            return 0 ;
        }
    }
    cout << "Yes\n" ;
    return 0 ;
}