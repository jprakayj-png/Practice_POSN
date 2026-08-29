#include <bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    for (int i = 0 ; i < 26 ; i++){
        int n ;
        cin >> n ;
        cout << char('a' + (n - 1)) ;
    }
    return 0 ;
}