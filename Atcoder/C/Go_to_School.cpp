#include <bits/stdc++.h>
using namespace std ;

map<int,int>come ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        int t ;
        cin >> t ;
        come[t] = i ;
    }
    for (auto x : come){
        cout << x.second << " " ;
    }    
    return 0 ;
}