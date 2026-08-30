#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , k , c = 0 ;
    cin >> n >> k ;
    for (int i = 1 ; i <= n ; i++){
        string s = to_string(i) ;
        int m = 0 ;
        for (int i = 0 ; i < s.length() ; i++){
            m += s[i] - '0' ;
        }
        if (m == k){
            c++ ;
        }
    }
    cout << c << "\n" ;
    return 0 ;
}