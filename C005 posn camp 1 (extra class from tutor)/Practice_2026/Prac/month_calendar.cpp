#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int d , st ;
    cin >> d >> st ;
    int r = 0 , x = 1 , l = 1 ;
    for (int i = 1 ; i < st ; i++){
        cout << ".." << " " ;
        r++ ;       
    }
    while(x <= d){
        if (r % 7 == 0 && r != 0){
            cout << "\n" ;
            l++ ;
        }
        if (x < 10){
            cout << "0" << to_string(x) << " " ;
        }
        else {
            cout << to_string(x) << " " ;
        }
        x++ ;
        r++ ;
    }
    if (r % 7 != 0){
        int k = (l * 7) - d - (st - 1)  ;
        while(k--){
            cout << ".." << " " ;
        }
    }
    return 0 ;
}