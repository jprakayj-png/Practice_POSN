#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int c , p = 0 ;
    string s ;
    cin >> s ;
    while(p < s.size()){
        if (s[p] != '0'){
            p++ ;
        }
        else {
            if (s[p+1] == '0' && p+1 <= s.size()-1){
                p += 2 ;
            }
            else {
                p++ ;
            }
        }
        c++ ;
    }
    cout << c << "\n" ;
    return 0 ;
}
