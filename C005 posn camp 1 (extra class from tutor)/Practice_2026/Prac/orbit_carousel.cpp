#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , k ;
    cin >> n >> k ;
    int r = k % n ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x) ;
    }
    for (int i = n - r ; i < n ; i++){
        cout << v[i] << " " ;
    }
    for (int i = 0 ; i < n - r ; i++){
        cout << v[i] << " " ;
    }
    return 0 ;
}