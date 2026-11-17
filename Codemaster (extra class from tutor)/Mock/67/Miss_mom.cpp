#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int d ;
    cin >> d ;
  	d = d % 7 ;
    if (d-1 == 0){
        cout << 7 << "\n" ;
    }
    else {
        cout << d-1 << "\n" ;
    }
    return 0 ;
}