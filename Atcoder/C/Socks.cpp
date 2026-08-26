#include <bits/stdc++.h>
using namespace std ;

map<int,int>mp ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        long long x ;
        cin >> x ;
        mp[x]++ ;
    }
    long long sum = 0 ;
    for (auto x : mp){
        sum += x.second / 2 ;
    }
    cout << sum << "\n" ;
    return 0 ;
}