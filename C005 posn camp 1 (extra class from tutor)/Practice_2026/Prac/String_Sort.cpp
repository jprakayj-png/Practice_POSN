#include <bits/stdc++.h>
using namespace std ;

set<char>s ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string st ;
    cin >> st ;
    for (auto p : st){
        s.insert(p) ;
    }
    for (auto i : s){
        cout << i << " " ;
    }
    return 0 ;
}