#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;
vector<int>p ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n+2) ;
    for (int i = 1 ; i <= n ; i++){
        cin >> v[i] ;
    }
    v[0] = v[n] ;
    v[n+1] = v[1] ;
    int ct = 0 ;
    for (int i = 1 ; i <= n ; i++){
        if (v[i] > v[i-1] + v[i+1]){
            ct++ ;
            p.push_back(i) ;
        }
    }
    cout << ct << "\n" ;
    if (p.empty()){
        cout << "NONE" ;
    }
    else {
        for (auto pos : p){
            cout << pos << " " ;
        }
    }
    return 0 ;
}