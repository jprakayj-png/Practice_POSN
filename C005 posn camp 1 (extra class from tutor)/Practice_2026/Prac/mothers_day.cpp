#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int d ;
    cin >> d ;
    if ((d - 1) % 7 == 0){
        cout << 7 ;
    }
    else {
        cout << d - 1 ;
    }
    return 0 ;
}