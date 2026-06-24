#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int last = s[15] - '0' ;

    int array[15];
    for (int i = 14 ; i >= 0 ; i--){
        array[14-i] = s[i] - '0' ;
    }

    int sum = 0 ;
    for (int i = 0 ; i <= 14 ; i++){
        int x = 0 ;
        if (i % 2 == 0){
            x = array[i] * 2 ;
        }
        else {
            x = array[i] ;
        }
        if (x >= 10){
            sum += (x / 10) + (x % 10) ;
        }
        else {
            sum += x ;
        }
    }

    int ch = (10 - (sum % 10)) % 10 ;
    
    if (ch == last){
        cout << "Yes \n" ;
    }
    else {
        cout << "No \n" ;
    }

    return 0 ;
}