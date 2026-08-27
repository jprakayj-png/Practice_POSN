#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long m ;
    cin >> m ;
    string s = to_string(m) ;
    long long k = 0 ;
    reverse(s.begin(),s.end()) ;
    for (int i = 0 ; i < s.size() ; i++){
        k += s[i] - '0' ;
    }
    if (m % k == 0){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    return 0 ;
}