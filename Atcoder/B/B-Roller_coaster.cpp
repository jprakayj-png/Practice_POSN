#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , target , c = 0  ;
    cin >> n >> target ;
    while(n--){
        int x ;
        cin >> x ;
        if (x >= target){
            c++ ;
        }
    }
    cout << c << "\n" ;
    return 0 ;
}