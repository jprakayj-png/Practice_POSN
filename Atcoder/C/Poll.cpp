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
    for (auto x : mp){
        if (x.second > mx){
            mx = x.second ;
        }
    }
    for (auto x : mp){
        if (x.second == mx){
            cout << x.first << "\n" ;
        }
    }
    return 0 ;
}