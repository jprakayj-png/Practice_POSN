#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    string k ;
    char c = s[0] ;
    k += s[0] ;
    for (int i = 1 ; i < s.length() ; i++){
        if (s[i] != c){
            k += s[i] ;
            c = s[i] ;
        }
    }
    cout << k << "\n" ;
    return 0 ;
}