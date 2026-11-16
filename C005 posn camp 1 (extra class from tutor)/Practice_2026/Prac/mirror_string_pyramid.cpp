#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.length() ; i++){
        for (int j = i ; j < s.length() - 1 ; j++){
            cout << " " ;
        }
        for (int j = 0 ; j <= i ; j++){
            cout << s[j] ;
        }
        for (int j = i - 1 ; j >= 0 ; j--){
            cout << s[j] ;
        }
        cout << "\n" ;
    }
    return 0 ;
}