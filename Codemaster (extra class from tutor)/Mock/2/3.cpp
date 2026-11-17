#include <bits/stdc++.h>
using namespace std ;

vector<long long>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    if (n == 1){
        cout << 1 << " " << 0 << "\n" ;
        return 0 ;
    }
    v.resize(n) ;
    long long mx = 0 ;
    long long p = 0 ;
    for (size_t i = 0 ; i < n ; i++){
        cin >> v[i] ;
        if (v[i] > mx){
            p = i ;
            mx = v[i] ;
        }
    }
    long long dist = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (v[i] != 0){
            dist += (abs(i - p)) * v[i] ;
        }
    }
    cout << p + 1 << " " << dist << "\n" ;
    return 0 ;
}