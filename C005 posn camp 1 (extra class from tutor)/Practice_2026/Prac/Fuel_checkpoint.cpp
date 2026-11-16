#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , t ;
    cin >> n >> t ;
    v.resize(n+1) ;
    v[0] = 0 ;
    for (int i = 1 ; i <= n ; i++){
        int x ;
        cin >> x ;
        v[i] = x + v[i-1] ;
    }
    for (int i = 1 ; i <= n ; i++){
        if (v[i] >= t){
            cout << i << "\n" ;
            return 0 ;
        }
    }
    cout << "NOT REACHED" << "\n" ;
    return 0 ;
}