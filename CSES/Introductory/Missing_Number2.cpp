#include <bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(nullptr) ;
    long long n ;
    long long sum = 0;
    cin >> n ;
    long long sum_all = (n * (n+1)) / 2 ;
    for (int i = 0 ; i < n-1 ; i++){
        long long x ;
        cin >> x ;
        sum += x ;
    }
    cout << sum_all - sum << "\n" ;
    return 0 ;
}