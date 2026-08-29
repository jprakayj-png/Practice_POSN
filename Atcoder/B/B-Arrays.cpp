#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>>v ;

int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    while(n--){
        int m ;
        cin >> m ;
        vector<int>x ;
        while(m--){
            int d ;
            cin >> d ;
            x.push_back(d) ;
        }
        v.push_back(x) ;
    }
    int p1 , p2 ;
    cin >> p1 >> p2 ;
    cout << v[p1-1][p2-1] ;
    return 0 ;
}