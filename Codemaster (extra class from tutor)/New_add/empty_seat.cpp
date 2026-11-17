#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int ct = 0 , mx = 0 ;
    while(n--){
        char c ;
        cin >> c ;
        if (c == '.'){
            ct++ ;
        }
        else {
            if (ct > mx){
                mx = ct ;
            }
            ct = 0 ;
        }
    }
    if (ct > mx){
        mx = ct ;
    }
    cout << mx << "\n" ;
    return 0 ;
}