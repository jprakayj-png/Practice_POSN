#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;
vector<bool>f ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , st ;
    cin >> n >> st ;
    v.resize(n) ;
    f.resize(n,0) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int ct = 0 ;
    int k = st-1 ;
    while(!f[k]){
        f[k] = 1 ;
        ct++ ;
        k = v[k] - 1 ;
    }
    cout << n - ct << "\n" ;
    return 0 ;
}