#include <bits/stdc++.h>
using namespace std ;

long long arr[10000005] ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    long long ans = 0 ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        long long x , total = 0 , m = 0 ;
        cin >> x ;
        m = x ;
        while ( x > 0){
            total += x % 10 ;
            x /= 10 ;
        }
        arr[total] = arr[total] + m ;
        if (arr[total] > ans){
            ans = arr[total] ;
        }
    }
    cout << ans << "\n" ;
    return 0 ;
}