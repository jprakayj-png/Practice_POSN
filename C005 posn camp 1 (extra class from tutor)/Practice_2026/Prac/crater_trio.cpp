#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;
int n ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int p = 0 , mx = 0 ;
    for (int i = 0 ; i < v.size() - 2 ; i++){
        if (v[i] + v[i+1] + v[i+2] > mx){
            mx = v[i] + v[i+1] + v[i+2] ;
            p = i ;
        }
    }
    cout << p + 1 << " " << mx << "\n" ;
    return 0 ;    
}