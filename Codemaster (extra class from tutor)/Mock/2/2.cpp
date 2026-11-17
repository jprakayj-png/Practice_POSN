#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    long long k ;
    cin >> k ;
    long long m = k % 26 ;
    for (size_t i = 0 ; i < s.length() ; i++){
        if (s[i] + m > 'Z'){
            cout << char('A' + (s[i] + m - 'Z' - 1)) ;
        }
        else {
            cout << char(s[i] + m) ;
        }
    }
    return 0 ;
}