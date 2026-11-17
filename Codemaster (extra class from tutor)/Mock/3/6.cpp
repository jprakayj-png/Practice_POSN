#include <bits/stdc++.h>
using namespace std ;

stack<char>s ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        char c ;
        cin >> c ;
        if (s.empty()){
            s.push(c) ;
        }
        else {
            if (s.top() == c){
                s.pop() ;
            }
            else {
                s.push(c) ;
            }
        }
    }
    if (s.empty()){
        cout << "EMPTY\n" ;
    }
    else {
        string a ;
        while(!s.empty()){
            a += s.top() ;
            s.pop() ;
        }
        reverse(a.begin(),a.end()) ;
        cout << a << "\n" ;
    }
    return 0 ;
}