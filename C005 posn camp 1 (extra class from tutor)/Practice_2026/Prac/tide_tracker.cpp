#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    int u = 0 , d = 0 , f = 0 ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int k = v[0] ;
    for (int i = 1 ; i < n ; i++){
        if (v[i] > k){
            u++ ;
        }
        else if (v[i] < k){
            d++ ;
        }
        else {
            f++ ;
        }
        k = v[i] ;
    }
    cout << u << " " << d << " " << f << "\n" ;
    return 0 ;
}