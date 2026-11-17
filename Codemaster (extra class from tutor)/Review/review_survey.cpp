#include <bits/stdc++.h>
using namespace std ;


int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , m ;
    cin >> n >> m ;
    long long y , x , crash = 0 ;
    cin >> y >> x ;
    string st ;
    cin >> st ;
    for (auto s : st){
        if (s == 'U'){
            if (y-1 < 1){
                crash++ ;
            }
            else {
                y-- ;
            }
        }
        else if (s == 'D'){
            if (y+1 > n){
                crash++ ;
            }
            else {
                y++ ;
            }
        }
        else if (s == 'R'){
            if (x+1 > m){
                crash++ ;
            }
            else {
                x++ ;
            }
        }
        else if (s == 'L'){
            if (x-1 < 1){
                crash++ ;
            }
            else {
                x-- ;
            }
        }
    } 
    cout << y << " " << x << " " << crash << "\n" ;
    return 0 ;   
}