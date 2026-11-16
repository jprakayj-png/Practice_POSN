#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int b , w ;
    cin >> b >> w ;
    int c1 , c2 ;
    cin >> c1 >> c2 ;
    while(c1 != -1 && c2 != -1){
        if (c1 != c2){
            if (c1 == 0){
                if (c2 == 2){
                    w-- ;
                }
                else if (c2 == 5){
                    b-- ;
                }
            }
            else if (c1 == 2){
                if (c2 == 0){
                    b-- ;
                }
                else if (c2 == 5){
                    w-- ;
                }
            }
            else if (c1 == 5){
                if (c2 == 0){
                    w-- ;
                }
                else if (c2 == 2){
                    b-- ;
                }
            }
        }
        if (b <= 0){
            cout << "white " << w << "\n" ;
            return 0 ;
        }
        if (w <= 0){
            cout << "black " << b << "\n" ;
            return 0 ;
        }
        cin >> c1 >> c2 ;
    }
}