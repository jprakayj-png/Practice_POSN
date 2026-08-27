#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int k = 0 ;
    for (int i = 0 ; i < s.size() ;){
        if(s[i] == '0' && s[i+1] == '0'){
            k++ ;
            i += 2 ;
        }
        else {
            i++ ;
        }
    }
    cout << s.size() - k << "\n" ;
    return 0 ;
}