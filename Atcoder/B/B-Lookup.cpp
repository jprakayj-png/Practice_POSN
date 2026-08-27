#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s , t ;
    cin >> s >> t ;
    int k = s.find(t) ;
    if (k == string::npos){
        cout << "No" ;
    }
    else {
        cout << "Yes" ;
    }
    return 0 ;
}