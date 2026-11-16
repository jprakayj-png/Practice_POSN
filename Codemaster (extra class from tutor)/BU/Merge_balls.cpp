#include <bits/stdc++.h>
using namespace std ;

vector<long long>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n ;
    cin >> n ;
    while(n--){
        long long m ;
        cin >> m ;
        v.push_back(m) ;
        while(v.size() >= 2 && v[v.size()-1] == v[v.size()-2]){
            v.pop_back() ;
            v.back()++ ;  
        }
    }
    cout << v.size() << "\n" ;
    return 0 ;
}