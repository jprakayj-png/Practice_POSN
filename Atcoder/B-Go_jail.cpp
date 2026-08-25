#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int c = 0 ;
    int n ;
    bool ch = false ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int ds , de ;
        cin >> ds >> de ;
        if (ds == de){
            c++ ;
        }
        else {
            c = 0 ;
        }
        if (c >= 3){
            ch = true ;
        } 
    }
    if (ch){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
    return 0 ;
}