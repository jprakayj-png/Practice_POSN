#include <bits/stdc++.h>
using namespace std ;

vector<long long>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    v.resize(n) ;
    for (long long i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    long long sum = 0 ;
    long long j = 0 ;
    for (int i = 0 ; i < n ; i++){
        sum += j ;
        if (v[i] > j){
            j = v[i] ;
        }
    }
    cout << sum << "\n" ;
    return 0 ;
}