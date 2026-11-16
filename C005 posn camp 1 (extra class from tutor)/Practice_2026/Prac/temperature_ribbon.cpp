#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , l , a ;
    int c = 0 , o = 0 , h = 0 ;
    cin >> n >> l >> a ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if (x < l){
            c++ ;
        }
        else if (x > a){
            h++ ;
        }
        else {
            o++ ;
        }
    }
    cout << c << " " << o << " " << h << "\n" ;
    return 0 ;
}