#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n , t ;
    cin >> n >> t ;
    for (int i = 1 ; i <= n ; i++){
        int d ;
        cin >> d ;
        v.push_back({d,i}) ;
    }
    for (auto d : v){
        if (d.first == t){
            if (d.second - 1 < n - d.second){
                cout << "left" ;
            }
            else if (d.second - 1 > n - d.second){
                cout << "right" ;
            }
            else {
                cout << "same" ;
            }
        }
    }
    return 0 ;
}