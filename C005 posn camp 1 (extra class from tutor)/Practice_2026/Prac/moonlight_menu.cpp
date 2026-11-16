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
        cin >> s ;
        mp[s]++ ;
    }
    int mx = 0 ;
    string x ;
    for (auto d : mp){
        if (d.second > mx){
            mx = d.second ;
            x = d.first ;
        }
        else if (d.second == mx){
            x = min(x,d.first) ;
        }
    }
    cout << x << " " << mx << "\n" ;
    return 0 ;
}
