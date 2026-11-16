#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n+1) ;
    for (int i = 0 ; i <= n ; i++){
        if (i == 0){
            v[i] = 0 ;
        }
        else if (i <= 2){
            v[i] = 1 ;
        }
        else {
            v[i] = v[i-1] + v[i-2] ;
        }
        
        if (i == n){
            cout << v[i] ;
        }
        else {
            cout << v[i] << ", " ;
        }
    }
    return 0 ;
}

