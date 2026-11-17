#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , target ;
    cin >> n >> target ;
    vector<int>v(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    for (int i = 0 ; i < n ; i++){
        int left = target - v[i] ;
        if (find(v.begin(),v.end(),left) != v.end()){
            cout << "YES\n" ;
            return 0 ;
        }
    }
    cout << "NO\n" ;
    return 0 ;
}