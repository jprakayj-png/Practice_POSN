#include <bits/stdc++.h>
using namespace std ;

vector<int>v(105,0) ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , k  , rem = 0 ;
    cin >> n >> k ;
    while(n--){
        int x ;
        cin >> x ;
        v[x]++ ;
        if (v[x] > rem){
            rem = v[x] ;
        }
    }
    for (int i = 100 ; i >= 0 ; i--){
        if (v[i] + k > rem){
            cout << i << "\n" ;
            break ;
        }
    }
    return 0 ;
}