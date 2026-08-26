// not finished --> not 100%

#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string a , b ;
    cin >> a >> b ;
    if (abs(b[1]-b[0]) == abs(a[1]-a[0])){
        cout << "Yes" << "\n" ;
    }
    else {
        cout << "No" << "\n" ;
    }
    return 0 ;
}