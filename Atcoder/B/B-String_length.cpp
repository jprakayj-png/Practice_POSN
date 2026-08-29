#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    string a , b ;
    cin >> a >> b ;
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << b[i] ;
    }
    return 0 ;
}