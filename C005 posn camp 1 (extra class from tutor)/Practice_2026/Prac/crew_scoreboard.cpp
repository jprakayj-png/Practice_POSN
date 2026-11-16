#include <bits/stdc++.h>
using namespace std ;

map<string,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        string s ;
        int x ;
        cin >> s >> x ;
        mp[s] += x ;
    }
    int mx = 0 ;
    string p ;
    for (auto d : mp){
        if (d.second > mx){
            mx = d.second ;
            p = d.first ;
        }
        else if (d.second == mx){
            p = min(p,d.first) ;
        }
    }
    cout << p << " " << mx << "\n" ;
    return 0 ;
}