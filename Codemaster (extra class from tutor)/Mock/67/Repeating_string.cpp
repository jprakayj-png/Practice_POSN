#include <bits/stdc++.h>
using namespace std ;

set<char>s ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s1 , s2 ;
    cin >> s1 ;
    cin >> s2 ;
    if (s1.size() > s2.size()){
        for (auto ch : s2){
            auto f = find(s1.begin(),s1.end(),ch) ;
            if (f != s1.end() && *f == ch){
                s.insert(ch) ;
            }
        }
    }
    else {
        for (auto ch : s1){
            auto f = find(s2.begin(),s2.end(),ch) ;
            if (f != s2.end() && *f == ch){
                s.insert(ch) ;
            }
        }
    }
    for (auto d : s){
        cout << d << " " ;
    }
    cout << "\n" ;
    return 0 ;
}   