#include <bits/stdc++.h>
using namespace std ;

vector<long long>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , target;
    cin >> n >> target;
    v.resize(n) ;
    for (long long i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    sort(v.begin(),v.end(), greater<int>()) ;
    int m = 0 ;
    for (auto s : v){
        target -= s ;
        m++ ;
        if (target < 0){
            cout << m << "\n" ;
            return 0 ;
        }
    }
    return 0 ;
}