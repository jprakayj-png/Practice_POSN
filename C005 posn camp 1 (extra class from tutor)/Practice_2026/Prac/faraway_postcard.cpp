#include <bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>v ;
int main() {
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int x , y ;
        cin >> x >> y ;
        v.push_back({x,y}) ;
    }
    int mx = 0 , cx , cy ;
    for (auto d : v){
        int s = abs(d.first) + abs(d.second) ;
        if (s > mx){
            mx = s ;
            cx = d.first ;
            cy = d.second ;
        }
    }
    cout << cx << " " << cy << " " << mx << "\n" ;
    return 0 ;
}