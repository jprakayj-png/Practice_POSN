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
    int sum = 0 ;
    for (int i = 0 ; i < n - 1 ; i++){
        for (int j = i + 1 ; j < n ; j++){
            sum += v[i] * v[j] ;
        }
    }
    cout << sum << "\n" ;
    return 0 ;
}