#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    double ans = 69.000000 ;
    int array[n] ;
    for (int i = 0 ; i < n ; i++){
        cin >> array[i] ;
    }
    for (int i = n - 1 ; i >= 0 ; i--){
        ans = array[i] + array[i] / ans ;
    }
    cout << fixed << setprecision(6) <<  ans << "\n" ;
    return 0 ;
}