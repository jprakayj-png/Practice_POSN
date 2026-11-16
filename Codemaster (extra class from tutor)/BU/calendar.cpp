#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int d , c ;
    cin >> d >> c ;
    cout << "+---------------------------+\n" ;
    for (int i = 1 ; i < c ; i++){
        cout << "|..." ;
    }
    int p = 1 ;
    while(p <= d){
        if (p < 10){
            cout << "|.." << p ;
        }
        else if (p < 100){
            cout << "|." << p  ;
        }
        else {
            cout << p  ;
        }
        if (c % 7 == 0){
            cout << "|\n" ;
            c = 0 ;
        }
        c++ ;
        p++ ;
    }
    for (int i = 0 ; i <= 7 - c ; i++){
        cout << "|..." ;
        if (i == 7 - c ){
            cout << "|\n" ; 
        }
    }
    cout << "+---------------------------+\n" ;
}