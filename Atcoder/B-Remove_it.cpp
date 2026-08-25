#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if (x == m){
            continue ;
        }
        else {
            v.push_back(x) ;
        }
    }
    for (auto x : v){
        cout << x << " " ;
    }
    return 0 ;
}