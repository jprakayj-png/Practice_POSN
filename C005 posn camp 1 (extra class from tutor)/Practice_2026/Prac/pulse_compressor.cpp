#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    char c = s[0] ;
    int ct = 1 ;
    for (int i = 1 ; i < s.length() ; i++){ 
        if (s[i] == c){
            ct++ ;
        }
        else {
            cout << c << ct << " " ;
            c = s[i] ;
            ct = 1 ;
        }
    }
    cout << c << ct << " " ;
    return 0 ;
}