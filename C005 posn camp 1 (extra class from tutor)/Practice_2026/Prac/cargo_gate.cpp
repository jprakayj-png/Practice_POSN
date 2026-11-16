#include <bits/stdc++.h>
using namespace std ;

int n , mx , s ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n >> mx >> s ;
    v.resize(n) ;
    int total = 0 ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
        total += v[i] ;
    }
    if (total > mx){
        cout << "OVERLOAD" ;
        return 0 ;
    }
    else {
        for (int i = 0 ; i < n ; i++){
            if (v[i] > s){
                cout << "OVERSIZE" ;
                return 0 ;
            }
        }
        cout << "CLEAR" ;
        return 0 ;
    }
}