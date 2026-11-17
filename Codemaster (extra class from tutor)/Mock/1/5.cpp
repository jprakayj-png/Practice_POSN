#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m , x , y ;
    cin >> n >> m >> x >> y ;
    string order ;
    cin >> order ;
    int cancel = 0 ;
    for (int i = 0 ; i < order.length() ; i++){
        if (order[i] == 'U'){
            if (y-1 < 1){
                cancel++ ;
            }
            else {
                y-- ;
            }
        }
        else if (order[i] == 'D'){
            if (y+1 > n){
                cancel++ ;
            }
            else {
                y++ ;
            }
        }
        else if (order[i] == 'R'){
            if (x+1 > m){
                cancel++ ;
            }
            else {
                x++ ;
            }
        }
        else if (order[i] == 'L'){
            if (x-1 < 1){
                cancel++ ;
            }
            else {
                x-- ;
            }
        }
    }
    cout << y << " " << x << " " << cancel << "\n" ;
    return 0 ;
}