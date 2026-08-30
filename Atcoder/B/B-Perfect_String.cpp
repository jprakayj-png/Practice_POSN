#include <bits/stdc++.h>
using namespace std ;

map<char,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    bool u = 0 , l = 0 ; 
    for (auto x : s){
        if (x >= 'A' && x <= 'Z'){
            u = 1 ;
        }
        if (x >= 'a' && x <= 'z'){
            l = 1 ;
        }
        mp[x]++ ;
    }
    bool ch = 1 ;
    for (auto x : mp){
        if (x.second != 1){
            ch = 0 ;
            break ;
        }
    }
    if (ch && u && l){
        cout << "Yes\n" ;
    }
    else {
        cout << "No\n" ;
    }
    return 0 ;
}