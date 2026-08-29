#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    bool ch = 1 ;
    for (int i = 0 ; i < s.length() ; i++){
        if (i % 2 == 0){
            if (s[i] == 'R' || s[i] == 'U' || s[i] == 'D'){
                ch = 1 ;
            }
            else {
                ch = 0 ;
                break ;
            }
        }
        else {
            if (s[i] == 'L' || s[i] == 'U' || s[i] == 'D'){
                ch = 1 ;
            }
            else {
                ch = 0 ;
                break ;
            }
        }
    }
    if (ch){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    return 0 ;
}