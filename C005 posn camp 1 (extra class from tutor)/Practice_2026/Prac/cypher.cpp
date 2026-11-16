#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int k ;
    cin >> k ;
    for (int i = 0 ; i < s.length() ; i++){
        cout << char('A' + (( s[i] - 'A' + k ) % 26)) ;
    }
    return 0 ;
}