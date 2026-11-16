#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int p = 0 , t = 0 , sum = 0 ;
    for (int i = 1 ; i <= n ; i++){
        char c ;
        cin >> c ;
        if (c == '?'){
            t = p + 1 ;
        }
        else {
            sum += (p + 1) * (c - '0') ;
        }
        p = i % 3 ;
    }
    for (int i = 0 ; i <= 9 ; i++){
        if ((sum + (i * t)) % 11 == 0){
            cout << i << "\n" ;
            return 0 ;
        }
    }
    cout << "IMPOSSIBLE\n" ;
    return 0 ;
}