#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s , k ;
    cin >> s ;
    int ld = s[15] - '0' ;
    for (int i = 0 ; i < 15 ; i++){
        k += s[i] ;
    }
    reverse(k.begin(),k.end()) ;
    int sum = 0 ;
    for (int i = 0 ; i < k.length() ; i++){
        if (i % 2 == 0){
            int t = (k[i] - '0') * 2 ;
            if (t >= 10){
                sum += (t / 10) + (t % 10) ;
            }
            else {
                sum += t ;
            }
        }
        else {
            int t = k[i] - '0' ;
            sum += t ;
        }
    }
    if (( 10 - (sum % 10)) % 10 == ld){
        cout << "Yes\n" ;
    }
    else {
        cout << "No\n" ;
    }
    return 0 ;
}