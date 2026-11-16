#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int total = 0 ;
    int n , mx = 0 ;
    cin >> n ;
    string o ;
    while(n--){
        string x ;
        cin >> x ;
        total += x.length() ;
        if (x.length() > mx){
            mx = x.length() ;
            o = x ;
        }
    }
    cout << total << " " << o << "\n" ;
    return 0 ;
}