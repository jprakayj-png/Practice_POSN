#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int g = 0 ;
    for (int i = 0 ; i < s.size() ; i++){
        g = g * 26 + (s[i] - 'A' + 1) ;
    }
    cout << g << "\n" ;
    return 0 ;
}