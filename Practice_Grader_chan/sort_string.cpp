#include <bits/stdc++.h>
using namespace std ;

set<char>s ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string st ;
    cin >> st ;
    for (auto x : st){
        s.insert(x) ; 
    }
    for (auto x : s){
        cout << x << " " ;
    }
    return 0 ;
}