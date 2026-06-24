#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s1 , s2 ;
    cin >> s1 ;
    cin >> s2 ;
    set<char>s ;
    int mn = min(s1.length() , s2.length() ) ;
    if (mn == s1.length()){
        for (int i = 0 ; i < s1.length() ; i++){
            for (int j = 0 ; j < s2.length() ; j++){
                if (s2[j] == s1[i]){
                    s.insert(s2[j]) ;
                    break ;
                }
            }
        }
    }
    else {
        for (int i = 0 ; i < s2.length() ; i++){
            for (int j = 0 ; j < s1.length() ; j++){
                if (s1[j] == s2[i]){
                    s.insert(s1[j]) ;
                    break ;
                }
            }
        }
    }
    for (auto x : s){
        cout << x << " " ;
    }
    return 0 ;
}