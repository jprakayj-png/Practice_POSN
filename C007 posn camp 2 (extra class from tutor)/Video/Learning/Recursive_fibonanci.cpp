#include <bits/stdc++.h>
using namespace std ;

int fib(int n) ;

int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    int n ;
    cin >> n ;
    cout << fib(n) << endl ;
    return 0 ;
}

int fib(int n){
    if (n <= 1){
        return n ;   
    }
    else {
       return fib(n-1) + fib(n-2) ;
    }
}