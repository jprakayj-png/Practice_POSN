#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    int ls = s[15] - '0' ;
    int sum = 0 ;
    for (int i = 14 ; i >= 0 ; i--){
        int k = 0 ;
        if (i % 2 == 0){
            k = 2 * (s[i] - '0') ;
            if (k >= 10){
                sum += k / 10 ;
                sum += k % 10 ;
            }
            else {
                sum += k ;
            }
        }
        else {
            sum += (s[i] - '0') ;
        }
    }
    if ((10-(sum % 10)) % 10 == ls){
        cout << "yes" ;
    }
    else {
        cout << "no" ;
    } 
    return 0 ;
}