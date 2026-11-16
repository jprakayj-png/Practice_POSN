#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    string s ;
    cin >> s ;
    string k ;
    for (auto i : s){
        if (i == '('){
            k += '[' ;
        }
        else if (i == '['){
            k += '(' ;
        }
        else if (i == ')'){
            k += ']' ;
        }
        else if (i == ']'){
            k += ')' ;
        }
        else {
            k += i ;
        }
    }
    if (s == k){
        cout << "No parentheses" ;
    }
    else {
        cout << k ;
    }
    return 0 ;
}