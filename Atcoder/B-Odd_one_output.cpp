#include <bits/stdc++.h>
using namespace std ;

map<char,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.size() ; i++){
        mp[s[i]]++ ;
    }
    for (auto x : mp){
        if (x.second != 1){
            continue ;
        }
        else {
            cout << x.first << "\n" ;
        }
    }
    return 0 ;
}