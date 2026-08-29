#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    long long c = 0 ;
    for (int i = 0 ; i < s.length() / 2 ; i++){
        if (s[i] != s[s.length()-1-i]){
            c++ ;
        }
    }
    cout << c << "\n" ;
    return 0 ;
}