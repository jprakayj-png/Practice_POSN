#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long a , b ;
    cin >> a >> b ;
    string s = to_string(a*b) ;
    int k = 0 ;
    cin >> k ;
    k = k - 1 ;
    if (k >= 0 && k < s.size()){
        cout << s[k] ;
    }
    else {
        cout << "_" ;
    }    
    return 0 ;
}