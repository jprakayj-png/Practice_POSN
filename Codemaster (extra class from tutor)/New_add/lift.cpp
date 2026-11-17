#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , o  ;
    cin >> n >> o ;
    long long level = 1 ;
    long long not_ok = 0 ;
    while(o--){
        char d ;
        cin >> d ;
        if (d == 'U'){
            level++ ;
        }
        else {
            level-- ;
        }
        if (level > n){
            not_ok++ ;
            level = n ;
        }
        else if (level < 1){
            not_ok++ ;
            level = 1 ;
        }
    }
    cout << level << " " << not_ok << "\n" ;
    return 0 ;
}