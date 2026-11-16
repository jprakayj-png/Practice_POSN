#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , m ;
    cin >> n >> m ;
    v.resize(n+1) ;
    for (int i = 1 ; i <= n ; i++){
        cin >> v[i] ;
    }
    while(m--){
        string s ;
        cin >> s ;
        if (s == "ADD"){
            int p , x ;
            cin >> p >> x ;
            v[p] += x ;
        }
        else if (s == "SET"){
            int p , x ;
            cin >> p >> x ;
            v[p] = x ;
        }
        else if (s == "REVERSE"){
            int p1 , p2 ;
            cin >> p1 >> p2 ;
            while(p1 < p2){
                swap(v[p1],v[p2]) ;
                p1++ ;
                p2-- ;
            }
        }
    }
    for (int i = 1 ; i <= n ; i++){
        cout << v[i] << " " ;
    }
    return 0 ;
}