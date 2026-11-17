#include <bits/stdc++.h>
using namespace std ;


int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int y = -1 , x = -1 ;
    int n , m ;
    cin >> n >> m ;
    cin >> x >> y ;
    string s ;
    cin >> s ;
    int cancel = 0 ;
    for (auto c : s){
        if (c == 'U'){
            if (x - 1 < 1){
                cancel++ ; 
            }
            else {
                x-- ;
            }
        }
        else if (c == 'R'){
            if(y + 1 > m){
                cancel++ ;
            }
            else {
                y++ ;
            }
        }
        else if (c == 'D'){
            if (x + 1 > n){
                cancel++ ;
            }
            else {
                x++ ;
            }
        }
        else if (c == 'L'){
            if (y-1 < 1){
                cancel++ ;
            }
            else {
                y-- ;
            }
        }
    }
    cout << x << " " << y << " " << cancel << "\n" ;
    return 0 ;
}