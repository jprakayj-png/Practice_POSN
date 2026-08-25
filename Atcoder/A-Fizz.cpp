#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        if (i % 3 == 0){
            cout << "Fizz" ;
        }
        else {
            cout << i ;
        }
        cout << "\n" ;
    }
    return 0 ;
}