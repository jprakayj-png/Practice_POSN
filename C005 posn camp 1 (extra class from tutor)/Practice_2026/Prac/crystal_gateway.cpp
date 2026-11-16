#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    v.resize(n) ;    
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    for (int i = 0 ; i < m ; i++){
        int x ;
        cin >> x ;
        if (x > v[n-1]){
            cout << -1 << " MISS\n" ;
        }
        else {
            auto it = lower_bound(v.begin(),v.end(),x) ;
            int p = it - v.begin() + 1 ;
            cout << p << " " ;
            if (x == v[p-1]){
                cout << "FOUND\n" ;
            }
            else {
                cout << "MISS\n" ;
            }
        }
    }
    return 0 ;
}