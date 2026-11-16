#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    char dir = 'N' ;
    int x = 0 , y = 0 ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.length() ; i++){
        if (s[i] == 'F'){
            if (dir == 'N'){
                y++ ;
            }
            else if (dir == 'S'){
                y-- ;
            }
            else if (dir == 'E'){
                x++ ;
            }
            else {
                x-- ;
            }
        }
        else {
            if (dir == 'N'){
                if (s[i] == 'L'){
                    dir = 'W' ;
                }
                else {
                    dir = 'E' ;
                }
            }
            else if (dir == 'E'){
                if (s[i] == 'L'){
                    dir = 'N' ;
                }
                else {
                    dir = 'S' ;
                }
            }
            else if (dir == 'S'){
                if (s[i] == 'L'){
                    dir = 'E' ;
                }
                else {
                    dir = 'W' ;
                }
            }
            else {
                if (s[i] == 'L'){
                    dir = 'S' ;
                }
                else {
                    dir = 'N' ;
                }
            }
        }
    }
    cout << x << " " << y << " " << dir << "\n" ;
    return 0 ;
}