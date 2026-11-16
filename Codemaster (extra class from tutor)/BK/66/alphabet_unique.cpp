#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.size() ; i++){
        bool ch = true ;
        for (int j = i + 1 ; j < s.size() ; j++){
            if (s[i] == s[j]){
                ch = false ;
                break ;
            }
        }
        if (ch){
            cout << s[i] << "\n" ;
            break ;
        }
    }
    return 0 ;
}