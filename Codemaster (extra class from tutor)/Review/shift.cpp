#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int k ;
    string s ;
    cin >> s ;
    cin >> k ;
    int m = k % 26 ;
    for (auto c : s){
        if (c + m > 'Z'){
            cout << char('A' + (c + m - 'Z' - 1)) ;
        }
        else {
            cout << char(c + m) ;
        }
    }
    return 0 ;
}