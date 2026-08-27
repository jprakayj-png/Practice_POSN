#include <bits/stdc++.h>
using namespace std ;

void show(int n) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    show(n) ;
    return 0 ;
}

void show(int n){
    if (n == 1){
        cout << 1 << " " ;
        return ;
    }
    show(n-1) ;
    cout << n << " " ;
    show(n-1) ;
}