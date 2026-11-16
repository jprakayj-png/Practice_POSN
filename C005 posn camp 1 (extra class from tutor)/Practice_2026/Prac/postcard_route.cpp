#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int x = 0 , y = 0 , sum = 0 ;
    int q ;
    cin >> q ;
    while(q--){
        int nx = 0 , ny = 0 ;
        cin >> nx >> ny ;
        sum += abs(nx-x) + abs(ny-y) ;
        x = nx ;
        y = ny ;
    }
    cout << sum << "\n" ;
    return 0 ;
}