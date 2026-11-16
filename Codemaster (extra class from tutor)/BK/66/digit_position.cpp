#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int a , b ;
    cin >> a >> b ;
    int sum = a * b ;
    string s = to_string(sum) ;
    int k ;
    cin >> k ;
    if (k > s.size()){
        cout << "_" << "\n" ;
    }
    else {
        cout << s[k-1] << "\n" ;
    }
    return 0 ;

}