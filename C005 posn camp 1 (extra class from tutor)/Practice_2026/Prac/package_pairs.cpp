#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , t ;
    cin >> n >> t ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int c = 0 ;
    for (int i = 0 ; i < n ; i += 2){
        if (v[i] + v[i+1] <= t){
            c++ ;
        }
    }
    cout << c << "\n" ;
    return 0 ;
}