#include <bits/stdc++.h>
using namespace std ;

double t (int x){
    return sqrt(x) ;
}

double recur(int m){
    return sqrt(m) - 1.0 ;
}

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        int x ;
        cin >> x ;
        cout << fixed << setprecision(2) <<  recur(x)  << "\n" ;
    }
    return 0 ;
}