#include <bits/stdc++.h>
using namespace std ;

map<char,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    mp['A'] = 0 ;
    mp['B'] = 0 ;
    mp['C'] = 0 ;
    mp['D'] = 0 ;
    mp['E'] = 0 ;
    mp['F'] = 0 ;
    mp['G'] = 0 ;
    mp['H'] = 0 ;
    string s ;
    cin >> s ;
    for (auto d : s){
        mp[d]++ ;
    }
    for (auto m : mp){
        cout << m.second << " " ;
    }
    return 0 ;
}