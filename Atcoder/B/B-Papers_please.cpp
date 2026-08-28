#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    bool ch = true ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if (x % 2 != 0 ){
            ch = true ;
        }
        else {
            if ((x % 3 == 0) || (x % 5 == 0)){
                ch = true ;
            }
            else {
                ch = false ;
                break ;
            }
        } 
    }
    if (ch){
        cout << "APPROVED" ;
    }
    else {
        cout << "DENIED" ;
    }
    return 0 ;
}