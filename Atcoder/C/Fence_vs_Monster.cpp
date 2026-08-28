#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , s ;
    cin >> n >> s ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> v[i] ;
    }
    sort(v.begin(),v.end(),greater<int>()) ;
    long long sum = 0 ;
    for (int i = s ; i < n ; i++){
        sum += v[i] ;
    }
    cout << sum << "\n" ;
    return 0 ;
}