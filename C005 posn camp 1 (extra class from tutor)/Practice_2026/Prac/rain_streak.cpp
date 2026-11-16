#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;
vector<int>ll ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n+1) ;
    ll.resize(n+1) ;
    for (int i = 1 ; i <= n ; i++){
        cin >> v[i] ;
    }
    for (int i = 1 ; i <= n ; i++){
        int c = 1 , x = v[i] ;
        for (int j = i + 1 ; j <= n ; j++){
            if (x < v[j]){
                c++ ;
                x = v[j] ;
            }
            else {
                break ;
            }
        }
        ll[i] = c ;
    }
    int mx = 0 , p = 0 ;
    for (int i = 1 ; i <= n ; i++){
        if (ll[i] > mx){
            p = i ;
            mx = ll[i] ;
        }
    }
    cout << p << " " << p + ll[p] - 1 << " " << mx << "\n" ;
    return 0 ;
}