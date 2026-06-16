#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    long long sum = 0 ;
    cin >> s ;
    for (int i = 0 ; i < s.length() ; i++){
        sum += (s[i] - '0') ;
    }
    cout << sum << "\n" ;
    return 0 ;
}