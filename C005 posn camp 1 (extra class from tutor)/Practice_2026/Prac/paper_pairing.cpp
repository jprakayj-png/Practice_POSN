#include <bits/stdc++.h>
using namespace std ;

map<long long , int>mp ;
int n ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    cin >> n ;
    while(n--){
        long long x ;
        cin >> x ;
        mp[x]++ ;
    }
    for (auto x : mp){
        if (x.second != 2){
            cout << x.first << "\n" ;
            return 0 ;
        }
    }
}