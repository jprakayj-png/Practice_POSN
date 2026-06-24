#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , am ;
    cin >> n >> am ;
    vector<int>sugar(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> sugar[i] ;
    }
    sort(sugar.begin() , sugar.end() , greater<int>()) ;
    long long e = 0 ;
    while(am > 0){
        am -= sugar[e] ;
        e++ ;
    }
    cout << e << " " ;
    return 0 ;
}