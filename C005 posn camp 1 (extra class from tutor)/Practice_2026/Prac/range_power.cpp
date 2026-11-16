#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    v.resize(n+1) ;
    v[0] = 0 ;
    for (int i = 1 ; i <= n ; i++){
        int x ;
        cin >> x ;
        v[i] = x + v[i-1] ;
    }
    while(m--){
        int s , e ;
        cin >> s >> e ;
        cout << v[e] - v[s-1] << "\n" ;
    }
    return 0 ;
}
