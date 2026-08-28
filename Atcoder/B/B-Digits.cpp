#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , k ;
    string s ;
    cin >> n >> k ;
    while (n > 0){
        int r = n % k ;
        s += to_string(r) ;
        n = n / k ;
    }
    cout << s.size() << "\n" ;
    return 0 ;
}