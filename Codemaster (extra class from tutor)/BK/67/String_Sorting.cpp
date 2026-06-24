#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string st ;
    set<char> s ;
    cin >> st ;
    for (int i = 0 ; i < st.length() ; i++){
        s.insert(st[i]) ;
    }
    for (auto x : s){
        cout << x << " " ;
    }
    return 0 ;
}