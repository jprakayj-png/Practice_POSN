#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int a , b , x , y ;
    cin >> a >> b >> x >> y ;
    for (int i = a ; i <= b ; i++){
        if (i % x == 0 || i % y == 0){
            cout << i << " " ;
        }
    }
    return 0 ;
}