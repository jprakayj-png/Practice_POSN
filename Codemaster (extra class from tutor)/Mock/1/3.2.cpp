#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , target ;
    cin >> n >> target ;
    v.resize(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    sort(v.begin(),v.end()) ;
    auto p1 = v.begin() ;
    auto p2 = v.end() - 1 ;
    while(p1 < p2){
        int sum = *p1 + *p2 ;
        if (sum == target){
            cout << "YES\n" ;
            return 0 ;
        }
        else if (sum < target){
            p1++ ;
        }
        else {
            p2-- ;
        }
    }
    cout  << "NO\n" ;
    return 0 ;
}