#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    bool ch = true ;
    for (int i = 0 ; i < n ; i++){
        char c ;
        cin >> c ;
        if(c == '"' && ch == true){
            ch = false ;
        }
        else if (c == '"' && ch == false){
            ch = true ;
        }
        if (c == ',' && ch == true){
            cout << '.' ;
        }
        else if (c == ',' && ch == false){
            cout << ',' ;
        }
        else {
            cout << c ;
        } 
    }
    return 0 ;
}