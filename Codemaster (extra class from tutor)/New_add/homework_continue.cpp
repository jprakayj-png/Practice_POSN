#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , mx = 0 , ct = 0 ;
    cin >> n ;
    while(n--){
        int q ;
        cin >> q ;
        if (q == 0){
            if (ct > mx){
                mx = ct ;
            }
            ct = 0 ;
        }
        else {
            ct++ ;
        }
    }
    if (ct > mx){
        mx = ct ;
    }
    cout << mx << "\n" ;
    return 0 ;
}