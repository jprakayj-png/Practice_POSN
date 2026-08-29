#include <bits/stdc++.h>
using namespace std ;

vector<int>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    long long n , m ;
    cin >> n >> m ;
    long long sum = 0 ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x) ;
        sum += x ;
    }
    long long r = sum - m ;
    for (auto x : v){
        if (x == r){
            cout << "Yes\n" ;
            return 0 ;
        }
    }
    cout << "No\n" ;
    return 0 ;
}