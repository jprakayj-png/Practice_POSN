#include <bits/stdc++.h>
using namespace std ;

int cal(int x) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    cout << cal(n) << "\n" ;
    return 0 ;
}

int cal(int x){
    return (3 * x * x) + x ;
}

