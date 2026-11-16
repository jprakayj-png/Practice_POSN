#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int ct = 0 , sum = 0 ;
    for (int i = 1 ; i < n-1 ; i++){
        if (v[i] > v[i-1] && v[i] > v[i+1]){
            ct++ ;
            sum += v[i] ;
        }
    }
    cout << ct << " " << sum << "\n" ;
    return 0 ;
}