#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int l = 1 , mx = v[0] ;
    for (int i = 1 ; i < n ; i++){
        if (v[i] > mx){
            l++ ;
            mx = v[i] ;
        }
    }
    int r = 1 ;
    mx = v[v.size()-1] ;
    for (int i = v.size()-2 ; i >= 0 ; i--){
        if (v[i] > mx){
            r++ ;
            mx = v[i] ;
        }
    }
    cout << l << " " << r << "\n" ;
    return 0 ;
}