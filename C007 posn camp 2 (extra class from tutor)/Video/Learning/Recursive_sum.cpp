#include <bits/stdc++.h>
using namespace std ;

int sum(int n) ;

int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    int n ;
    cin >> n ;
    cout << sum(n) << endl ;
    return 0 ;
}

int sum(int n) {
    if (n <= 0) {
        return n ;
    }
    else {
        return n + sum(n-1) ;
    }
} 